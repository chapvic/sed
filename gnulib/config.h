#ifndef GNULIB_CONFIG_H
#define GNULIB_CONFIG_H

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS 1
#endif // !_CRT_SECURE_NO_WARNINGS

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE 1
#endif // !_CRT_SECURE_NO_DEPRECATE

#define _GL_INLINE_HEADER_BEGIN
#define _GL_INLINE_HEADER_END
#define _GL_INLINE inline
#define _GL_EXTERN_INLINE extern

#define _GL_UNUSED
#define _GL_ATTRIBUTE_PURE
#define _GL_ATTRIBUTE_FORMAT(fmt)
#define _GL_ATTRIBUTE_FORMAT_PRINTF_STANDARD(a,b)
#define _GL_ARG_NONNULL(arg)

#define _GL_WINDOWS_STAT_TIMESPEC 0
#define _GL_WINDOWS_STAT_INODES 1

#define GNULIB_XALLOC_DIE 1
#define GNULIB_XALLOC 1
#define _GL_ATTRIBUTE_MALLOC
#define _GL_ATTRIBUTE_ALLOC_SIZE(a)

#define USE_UNLOCKED_IO 1
#define ENABLE_NLS 0

#define HAVE_ALLOCA 1
#define HAVE_CALLOC 1
#define HAVE_GETPROGNAME 1
#define HAVE_DECL_STRERROR_R 1

#ifndef DIRECTORY_SEPARATOR
#define DIRECTORY_SEPARATOR '\\'
#endif

#ifndef LIBDIR
#define LIBDIR "/usr/lib"
#endif

#ifndef ssize_t
#define ssize_t int
#endif // !ssize_t

#ifndef weak_alias
#define weak_alias(a,b)
#endif

#ifndef libc_hidden_def
#define libc_hidden_def(a)
#endif // !libc_hidden_def

#ifndef __USE_GNU
#define __USE_GNU
#endif

#ifndef HAVE_INLINE
#define HAVE_INLINE 1
#endif

#ifndef _REGEX_RE_COMP
#define _REGEX_RE_COMP
#endif

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif // !WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>			/* for O_BINARY and O_TEXT */
#include <locale.h>

#include <_Noreturn.h>
#include <unistd.h>

#ifndef _S_IFBLK
#define _S_IFBLK 0x6000
#endif

#ifndef _S_IFLNK
#define _S_IFLNK 0xA000
#endif

#ifndef _S_IFSOCK
#define _S_IFSOCK 0xC000
#endif

#define S_IFBLK _S_IFBLK
#define S_IFLNK _S_IFLNK
#define S_IFSOCK _S_IFSOCK
#define S_IFIFO _S_IFIFO

#endif // !GNULIB_CONFIG_H
