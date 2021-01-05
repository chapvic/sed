#ifndef GNULIB_H
#define GNULIB_H

#include "gnulib/config.h"

#include "gnulib/alloca.h"
#include "gnulib/error.h"
#include "gnulib/exitfail.h"
#include "gnulib/getopt.h"
#include "gnulib/getopt_int.h"
#include "gnulib/gettext.h"
#include "gnulib/localcharset.h"
#include "gnulib/malloca.h"
#include "gnulib/obstack.h"
#include "gnulib/stat-time.h"
#include "gnulib/stat-w32.h"
#include "gnulib/xalloc.h"

extern char* getprogname();
extern ssize_t getline(char** lineptr, size_t* n, FILE* stream);
extern ssize_t getdelim(char** lineptr, size_t* n, int delimiter, FILE* fp);

extern int __strverscmp(const char* s1, const char* s2);
#ifndef strverscmp
#define strverscmp __strverscmp
#endif

#ifndef stat
#define	stat	_stati64
#define	fstat	_fstati64
#define	off_t	__int64
#endif

#ifndef lstat
#define lstat rpl_stat
#endif // !lstat
extern int rpl_stat(char const* name, struct stat* buf);

#ifndef readlink
#define readlink readlink_w32
#endif // !readlink
extern ssize_t readlink_w32(const char* path, char* buf, size_t bufsiz);

#ifndef copy_acl
#define copy_acl(a,b,c,d,e)
#endif

extern char* getprogname();

#include "gnulib/sys_stat.h"

#endif // !GNULIB_H

