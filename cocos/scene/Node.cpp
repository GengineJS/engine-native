/****************************************************************************
 Copyright (c) 2021 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos.com
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.
 
 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "scene/Node.h"
#include "scene/Define.h"

namespace cc {
namespace scene {
Mat3       _m3_1;
Mat3       _m4_3;
Quaternion _qt_1;
void Node::updateWorldTransform() {
    if(!getDirtyFlag()) {
        return;
    }
    uint32_t i = 0;
    Node *   curr = this;
    while (curr && curr->_dirtyFlags)
    {
        i++;
        array_a.push_back(curr);
        curr = curr->_parent;
    }
    Node *child{nullptr};
    uint32_t dirtyBits = 0;
    while (i) {
        child = array_a[--i];
        dirtyBits |= child->_dirtyFlags;
        if (curr) {
            if (dirtyBits & static_cast<uint32_t>(TransformBit::POSITION)) {
                child->_nodeLayout->worldPosition.transformMat4(child->_nodeLayout->localPosition, child->_nodeLayout->worldMatrix);
                child->_nodeLayout->worldMatrix.m[12] = child->_nodeLayout->worldPosition.x;
                child->_nodeLayout->worldMatrix.m[13] = child->_nodeLayout->worldPosition.y;
                child->_nodeLayout->worldMatrix.m[14] = child->_nodeLayout->worldPosition.z;
            }
            if (dirtyBits & static_cast<uint32_t>(TransformBit::RS)) {
                Mat4::fromRTS(child->_nodeLayout->localRotation, child->_nodeLayout->localPosition, child->_nodeLayout->localScale, &child->_nodeLayout->worldMatrix);
                Mat4::multiply(curr->_nodeLayout->worldMatrix, child->_nodeLayout->worldMatrix, &child->_nodeLayout->worldMatrix);
                if (dirtyBits & static_cast<uint32_t>(TransformBit::ROTATION)) {
                    Quaternion::multiply(curr->_nodeLayout->worldRotation, child->_nodeLayout->localRotation, &curr->_nodeLayout->worldRotation);
                }
                _qt_1 = child->_nodeLayout->worldRotation;
                _qt_1.conjugate();
                Mat3::fromQuat(_m3_1, _qt_1);
                Mat3::fromMat4(_m4_3, child->_nodeLayout->worldMatrix);
                Mat3::multiply(_m3_1, _m3_1, _m4_3);
                child->_nodeLayout->worldScale.set(_m3_1.m[0], _m3_1.m[4], _m3_1.m[8]);
            } 
        } else if(child) {
            if (dirtyBits & static_cast<uint32_t>(TransformBit::POSITION)) {
                child->_nodeLayout->worldPosition.set(child->_nodeLayout->localPosition);
                child->_nodeLayout->worldMatrix.m[12] = child->_nodeLayout->worldPosition.x;
                child->_nodeLayout->worldMatrix.m[13] = child->_nodeLayout->worldPosition.y;
                child->_nodeLayout->worldMatrix.m[14] = child->_nodeLayout->worldPosition.z;
            }
            if (dirtyBits & static_cast<uint32_t>(TransformBit::RS)) {
                if (dirtyBits & static_cast<uint32_t>(TransformBit::ROTATION)) {
                    child->_nodeLayout->worldRotation.set(child->_nodeLayout->localRotation);
                }
                if (dirtyBits & static_cast<uint32_t>(TransformBit::SCALE)) {
                    child->_nodeLayout->worldScale.set(child->_nodeLayout->localScale);
                    Mat4::fromRTS(child->_nodeLayout->localRotation, child->_nodeLayout->localPosition, child->_nodeLayout->localScale, &child->_nodeLayout->worldMatrix);
                }
            }
        
        }
        child->setDirtyFlag(static_cast<uint32_t>(TransformBit::NONE));
        curr = child;
    }

}

void Node::initWithData(uint8_t *data) {
    _nodeLayout = reinterpret_cast<NodeLayout *>(data);
}

} // namespace scene
} // namespace cc