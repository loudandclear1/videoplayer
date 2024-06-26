#include "android/log.h"

#define LOG_DEBUG true

#define LOGD(FORMAT,...) __android_log_print(ANDROID_LOG_DEBUG,"hgz",FORMAT,##__VA_ARGS__);
#define LOGE(FORMAT,...) __android_log_print(ANDROID_LOG_ERROR,"hgz",FORMAT,##__VA_ARGS__);
