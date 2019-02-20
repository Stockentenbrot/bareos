#ifndef __MSWINVER_H_
#define __MSWINVER_H_

#define MS_MAJOR_WINDOWS_3 3
#define MS_MAJOR_WINDOWS_95 4
#define MS_MAJOR_WINDOWS_98 4
#define MS_MAJOR_WINDOWS_ME 4
#define MS_MAJOR_WINDOWS_NT4 4
#define MS_MAJOR_WINDOWS_2K 5
#define MS_MAJOR_WINDOWS_XP 5
#define MS_MAJOR_WINDOWS_S2003 5


#define MS_MINOR_WINDOWS_3 51
#define MS_MINOR_WINDOWS_95 0
#define MS_MINOR_WINDOWS_98 10
#define MS_MINOR_WINDOWS_ME 90
#define MS_MINOR_WINDOWS_NT4 0
#define MS_MINOR_WINDOWS_2K 0
#define MS_MINOR_WINDOWS_XP 1
#define MS_MINOR_WINDOWS_S2003 2


#define _mkversion(p, m, r) (((p) << 24) | ((m) << 8) | (r))

#define MS_WINDOWS_95                                         \
  _mkversion(VER_PLATFORM_WIN32_WINDOWS, MS_MAJOR_WINDOWS_95, \
             MS_MINOR_WINDOWS_95)
#define MS_WINDOWS_98                                         \
  _mkversion(VER_PLATFORM_WIN32_WINDOWS, MS_MAJOR_WINDOWS_98, \
             MS_MINOR_WINDOWS_98)
#define MS_WINDOWS_ME                                         \
  _mkversion(VER_PLATFORM_WIN32_WINDOWS, MS_MAJOR_WINDOWS_ME, \
             MS_MINOR_WINDOWS_ME)
#define MS_WINDOWS_NT4 \
  _mkversion(VER_PLATFORM_WIN32_NT, MS_MAJOR_WINDOWS_NT4, MS_MINOR_WINDOWS_NT4)
#define MS_WINDOWS_2K \
  _mkversion(VER_PLATFORM_WIN32_NT, MS_MAJOR_WINDOWS_2K, MS_MINOR_WINDOWS_2K)
#define MS_WINDOWS_XP \
  _mkversion(VER_PLATFORM_WIN32_NT, MS_MAJOR_WINDOWS_XP, MS_MINOR_WINDOWS_XP)
#define MS_WINDOWS_S2003                                    \
  _mkversion(VER_PLATFORM_WIN32_NT, MS_MAJOR_WINDOWS_S2003, \
             MS_MINOR_WINDOWS_S2003)


#endif
