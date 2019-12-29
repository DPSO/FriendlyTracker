#define MAINPREFIX z
#define PREFIX afft

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCH,BUILD

#define REQUIRED_VERSION 1.94

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(AFFT - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(AFFT - COMPONENT)
#endif