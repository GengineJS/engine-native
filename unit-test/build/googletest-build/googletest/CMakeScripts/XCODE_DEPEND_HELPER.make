# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.gtest.Debug:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtestd.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtestd.a


PostBuild.gtest_main.Debug:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtest_maind.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Debug/libgtest_maind.a


PostBuild.gtest.Release:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest.a


PostBuild.gtest_main.Release:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/Release/libgtest_main.a


PostBuild.gtest.MinSizeRel:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest.a


PostBuild.gtest_main.MinSizeRel:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/MinSizeRel/libgtest_main.a


PostBuild.gtest.RelWithDebInfo:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest.a


PostBuild.gtest_main.RelWithDebInfo:
/Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest_main.a:
	/bin/rm -f /Users/rosa/WorkSpace/editor-3d/resources/3d/cocos2d-x-lite/unit-test/build/lib/RelWithDebInfo/libgtest_main.a




# For each target create a dummy ruleso the target does not have to exist
