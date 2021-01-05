#ifndef CONFIG_H
#define CONFIG_H

#pragma warning(disable: 4090)
#pragma warning(disable: 4996)

#define STRCAT_N(A, B) A ## B
#define STRCAT(A, B) STRCAT_N(A, B)
#define STRINGIZE_N(A) #A
#define STRINGIZE(A) STRINGIZE_N(A)

#define VERSION "4.2.1"
#define SED_FEATURE_VERSION VERSION
#define COPYRIGHT_YEAR 2009
#define COPYRIGHT_YEAR_NEW "2020-2021"

#define BOOTSTRAP 1
#define __PROTOTYPES 1

#define HAVE_MEMORY_H 1
#define HAVE_STDLIB_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_STRTOUL 1
#define HAVE_VPRINTF 1
#define HAVE_SETLOCALE 1
#define HAVE_UNISTD_H 1
#define HAVE_LIMITS_H 1
#define HAVE_WCHAR_H 1
#define HAVE_LOCALE_H 1
#define HAVE_WCTYPE_H 1

#define HAVE_MEMMOVE 1
#define HAVE_MEMCPY 1
#define HAVE_STRCHR
#define HAVE_STRERROR 1
#define HAVE_MBRTOWC 1
#define HAVE_SETLOCALE 1
#define ENABLE_NLS 0

#define ENABLE_FOLLOW_SYMLINKS
#define REG_DOTALL 0x04

#define PACKAGE_GITHUB "https://github.com/chapvic/sed"

#include "../gnulib.h"

#endif // !CONFIG_H
