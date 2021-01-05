#include "gnulib.h"

#define fcloseall _fcloseall
#define fdopen _fdopen
#define fgetchar _fgetchar
#define fileno _fileno
#define flushall _flushall
#define fputchar _fputchar
#define getw _getw
#define putw _putw
#define rmtmp _rmtmp

char* getprogname() { return "gnulib-win32"; }

#include "gnulib/error.c"
#include "gnulib/exitfail.c"
#include "gnulib/getdelim.c"
#include "gnulib/getline.c"
#include "gnulib/getopt.c"
#include "gnulib/getopt1.c"
#include "gnulib/localcharset.c"
#include "gnulib/malloca.c"
#include "gnulib/obstack.c"
#include "gnulib/regex.c"
#include "gnulib/stat.c"
#include "gnulib/stat-w32.c"
#include "gnulib/strverscmp.c"
#include "gnulib/xalloc-die.c"
#include "gnulib/xmalloc.c"

ssize_t readlink_w32(const char* path, char* buf, size_t bufsiz) {
	ssize_t retval = 0;
	HANDLE hPath = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS, NULL);
	if (hPath != INVALID_HANDLE_VALUE) {
		retval = (ssize_t)GetFinalPathNameByHandleA(hPath, buf, bufsiz, FILE_NAME_OPENED);
		CloseHandle(hPath);
	}
	return retval;
}