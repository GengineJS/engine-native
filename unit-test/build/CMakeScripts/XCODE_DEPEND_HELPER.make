# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.CocosTest.Debug:
PostBuild.gtest.Debug: /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/Debug/CocosTest
PostBuild.cocos2d.Debug: /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/Debug/CocosTest
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/Debug/CocosTest:\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtestd.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/Debug/libcocos2d.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libfreetype.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libjpeg.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libpng.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libwebp.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcurl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libv8_monolith.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libuv_a.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libinspector.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcrypto.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libssl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libz.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOGLCompiler.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOSDependent.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libSPIRV.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang-default-resource-limits.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-core.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-glsl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-msl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbb_static.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_static.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_proxy_static.a
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/Debug/CocosTest


PostBuild.cocos2d.Debug:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/Debug/libcocos2d.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/Debug/libcocos2d.a


PostBuild.gmock.Debug:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgmockd.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgmockd.a


PostBuild.gmock_main.Debug:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgmock_maind.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgmock_maind.a


PostBuild.gtest.Debug:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtestd.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtestd.a


PostBuild.gtest_main.Debug:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtest_maind.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtest_maind.a


PostBuild.CocosTest.Release:
PostBuild.gtest.Release: /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/Release/CocosTest
PostBuild.cocos2d.Release: /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/Release/CocosTest
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/Release/CocosTest:\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/Release/libcocos2d.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libfreetype.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libjpeg.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libpng.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libwebp.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcurl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libv8_monolith.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libuv_a.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libinspector.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcrypto.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libssl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libz.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOGLCompiler.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOSDependent.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libSPIRV.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang-default-resource-limits.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-core.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-glsl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-msl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbb_static.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_static.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_proxy_static.a
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/Release/CocosTest


PostBuild.cocos2d.Release:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/Release/libcocos2d.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/Release/libcocos2d.a


PostBuild.gmock.Release:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgmock.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgmock.a


PostBuild.gmock_main.Release:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgmock_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgmock_main.a


PostBuild.gtest.Release:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest.a


PostBuild.gtest_main.Release:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest_main.a


PostBuild.CocosTest.MinSizeRel:
PostBuild.gtest.MinSizeRel: /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/MinSizeRel/CocosTest
PostBuild.cocos2d.MinSizeRel: /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/MinSizeRel/CocosTest
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/MinSizeRel/CocosTest:\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/MinSizeRel/libcocos2d.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libfreetype.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libjpeg.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libpng.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libwebp.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcurl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libv8_monolith.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libuv_a.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libinspector.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcrypto.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libssl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libz.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOGLCompiler.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOSDependent.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libSPIRV.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang-default-resource-limits.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-core.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-glsl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-msl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbb_static.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_static.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_proxy_static.a
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/MinSizeRel/CocosTest


PostBuild.cocos2d.MinSizeRel:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/MinSizeRel/libcocos2d.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/MinSizeRel/libcocos2d.a


PostBuild.gmock.MinSizeRel:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgmock.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgmock.a


PostBuild.gmock_main.MinSizeRel:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgmock_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgmock_main.a


PostBuild.gtest.MinSizeRel:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest.a


PostBuild.gtest_main.MinSizeRel:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest_main.a


PostBuild.CocosTest.RelWithDebInfo:
PostBuild.gtest.RelWithDebInfo: /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/RelWithDebInfo/CocosTest
PostBuild.cocos2d.RelWithDebInfo: /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/RelWithDebInfo/CocosTest
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/RelWithDebInfo/CocosTest:\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/RelWithDebInfo/libcocos2d.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libfreetype.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libjpeg.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libpng.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libwebp.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcurl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libv8_monolith.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libuv_a.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libinspector.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcrypto.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libssl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libz.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOGLCompiler.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOSDependent.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libSPIRV.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang-default-resource-limits.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-core.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-glsl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-msl.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbb_static.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_static.a\
	/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_proxy_static.a
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/src/RelWithDebInfo/CocosTest


PostBuild.cocos2d.RelWithDebInfo:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/RelWithDebInfo/libcocos2d.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/RelWithDebInfo/libcocos2d.a


PostBuild.gmock.RelWithDebInfo:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgmock.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgmock.a


PostBuild.gmock_main.RelWithDebInfo:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgmock_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgmock_main.a


PostBuild.gtest.RelWithDebInfo:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest.a


PostBuild.gtest_main.RelWithDebInfo:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest_main.a




# For each target create a dummy ruleso the target does not have to exist
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOGLCompiler.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libOSDependent.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libSPIRV.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang-default-resource-limits.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/glslang/libglslang.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcrypto.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libcurl.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libfreetype.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libinspector.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libjpeg.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libpng.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-core.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-glsl.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libspirv-cross-msl.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libssl.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbb_static.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_proxy_static.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libtbbmalloc_static.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libuv_a.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libv8_monolith.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libwebp.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/external/mac/libs/libz.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/Debug/libcocos2d.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/MinSizeRel/libcocos2d.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/RelWithDebInfo/libcocos2d.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/archives/Release/libcocos2d.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtestd.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest.a:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest.a:
