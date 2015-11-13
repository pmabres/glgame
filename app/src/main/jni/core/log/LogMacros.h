#ifndef _LOG_MACROS_H_
#define _LOG_MACROS_H_

#ifdef LOGGING_DISABLED

#define LOG_VERBOSE( ... )
#define LOG_DEBUG( ... )
#define LOG_INFO( ... )
#define LOG_WARN( ... )
#define LOG_ERROR( ... )
#define LOG_FATAL( ... )

#elif defined(ANDROID_DISABLED) // Replace ANDRIOD_DISABLED to ANDRIOD for turning on debug message.
#include <android/log.h>

#ifndef LOG_TAG
#define LOG_TAG "glgame"
#endif

#define LOG_VERBOSE(fmt, ... ) __android_log_print(\
    ANDROID_LOG_VERBOSE, LOG_TAG,\
    "(%d in %s) %s -- " fmt, __LINE__, __FILE__, __PRETTY_FUNCTION__,\
    ##__VA_ARGS__)
#define LOG_DEBUG(fmt, ... ) __android_log_print(\
    ANDROID_LOG_DEBUG, LOG_TAG,\
    "(%d in %s) %s -- " fmt, __LINE__, __FILE__, __PRETTY_FUNCTION__,\
    ##__VA_ARGS__)
#define LOG_INFO(fmt, ... ) __android_log_print(\
    ANDROID_LOG_INFO, LOG_TAG,\
    "(%d in %s) %s -- " fmt, __LINE__, __FILE__, __PRETTY_FUNCTION__,\
    ##__VA_ARGS__)
#define LOG_WARN(fmt, ... ) __android_log_print(\
    ANDROID_LOG_WARN, LOG_TAG,\
    "(%d in %s) %s -- " fmt, __LINE__, __FILE__, __PRETTY_FUNCTION__,\
    ##__VA_ARGS__)
#define LOG_ERROR(fmt, ... ) __android_log_print(\
    ANDROID_LOG_ERROR, LOG_TAG,\
    "(%d in %s) %s -- " fmt, __LINE__, __FILE__, __PRETTY_FUNCTION__,\
    ##__VA_ARGS__)
#define LOG_FATAL(fmt, ... ) __android_log_print(\
    ANDROID_LOG_FATAL, LOG_TAG,\
    "(%d in %s) %s -- " fmt, __LINE__, __FILE__, __PRETTY_FUNCTION__,\
    ##__VA_ARGS__)
#else
#include <android/log.h>
#ifndef LOG_TAG
#define LOG_TAG "glgame"
#endif
#define LOG_VERBOSE(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
#define LOG_DEBUG(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOG_INFO(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOG_WARN(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOG_ERROR(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOG_FATAL(...) __android_log_print(ANDROID_LOG_FATAL, LOG_TAG, __VA_ARGS__)

#endif // LOGGING_DISABLED

#endif // _LOG_MACROS_H_
