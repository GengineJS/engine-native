#include "MTLStd.h"
#include "MTLCommandAllocator.h"
#include "MTLCommands.h"

NS_CC_BEGIN

CCMTLCommandAllocator::CCMTLCommandAllocator(GFXDevice* device) : GFXCommandAllocator(device) {}
CCMTLCommandAllocator::~CCMTLCommandAllocator() { destroy(); }

bool CCMTLCommandAllocator::initialize(const GFXCommandAllocatorInfo& info)
{
    return true;
}

void CCMTLCommandAllocator::destroy()
{
    
}

void CCMTLCommandAllocator::clearCommands(CCMTLCommandPackage* commandPackage)
{
    //FIXME: it is not a good idea to use like this.
    if (commandPackage->beginRenderPassCmds.size() )
        _beginRenderPassCmdPool.freeCmds(commandPackage->beginRenderPassCmds);
    
    if (commandPackage->bindStatesCmds.size() )
        _bindStatesCmdPool.freeCmds(commandPackage->bindStatesCmds);
    
    if (commandPackage->drawCmds.size() )
        _drawCmdPool.freeCmds(commandPackage->drawCmds);
    
    //TODO: free other commands.
    
    commandPackage->commandTypes.clear();
}

NS_CC_END