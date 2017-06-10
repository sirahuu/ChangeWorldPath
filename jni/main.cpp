#include <jni.h>
#include <dlfcn.h>
#include <Substrate.h>
#include <string>

class FilePathManager{
public:
 static std::string WORLDS_DIR;
};

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
 FilePathManager::WORLDS_DIR="minecraftWorlds/mod/";
 return JNI_VERSION_1_2;
}
