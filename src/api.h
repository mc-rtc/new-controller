#pragma once

#if defined _WIN32 || defined __CYGWIN__
#  define NewController_DLLIMPORT __declspec(dllimport)
#  define NewController_DLLEXPORT __declspec(dllexport)
#  define NewController_DLLLOCAL
#else
// On Linux, for GCC >= 4, tag symbols using GCC extension.
#  if __GNUC__ >= 4
#    define NewController_DLLIMPORT __attribute__((visibility("default")))
#    define NewController_DLLEXPORT __attribute__((visibility("default")))
#    define NewController_DLLLOCAL __attribute__((visibility("hidden")))
#  else
// Otherwise (GCC < 4 or another compiler is used), export everything.
#    define NewController_DLLIMPORT
#    define NewController_DLLEXPORT
#    define NewController_DLLLOCAL
#  endif // __GNUC__ >= 4
#endif // defined _WIN32 || defined __CYGWIN__

#ifdef NewController_STATIC
// If one is using the library statically, get rid of
// extra information.
#  define NewController_DLLAPI
#  define NewController_LOCAL
#else
// Depending on whether one is building or using the
// library define DLLAPI to import or export.
#  ifdef NewController_EXPORTS
#    define NewController_DLLAPI NewController_DLLEXPORT
#  else
#    define NewController_DLLAPI NewController_DLLIMPORT
#  endif // NewController_EXPORTS
#  define NewController_LOCAL NewController_DLLLOCAL
#endif // NewController_STATIC
