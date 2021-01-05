CC = cl
AR = lib
LD = link

SED     = sed.exe
OBJS_GL = gnulib.obj
OBJS    = compile.obj execute.obj fmt.obj mbcs.obj regexp.obj sed.obj utils.obj

CFLAGS  = /c /nologo /O2 /W3 /MT /MP /EHsc /GS /GL /GA /GT /Zo- \
	/wd4267 /wd4244 /wd4018 /wd4311 /wd4312 /wd4005 /wd4028 /wd4133 \
	/D "NDEBUG" /D "_MBCS" /D "HAVE_CONFIG_H" /I "."

LDFLAGS = /nologo /release /version:4.2 /ltcg /out:$(SED) 

all:	$(SED) clean

$(SED):	$(OBJS_GL) $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) $(OBJS_GL)

.c.obj::
	$(CC) $(CFLAGS) /I "gnulib" $<

{sed}.c.obj::
	$(CC) $(CFLAGS) /I "sed" /I "gnulib" $<

clean:
	-del *.obj > nul 2>&1

.PHONY: all clean
