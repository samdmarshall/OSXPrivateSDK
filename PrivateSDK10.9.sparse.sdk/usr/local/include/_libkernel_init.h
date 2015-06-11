#ifndef _LIBKERNEL_INIT_H_
#define _LIBKERNEL_INIT_H_

typedef void* (*pfunc)();
typedef void (*vfunc)();

struct _libpthread_functions {
	int version;
	vfunc exit;
};

struct _libkernel_functions {
	int version;
	pfunc dlsym;
	pfunc malloc;
	vfunc free;
	pfunc realloc;
	vfunc _pthread_exit_if_canceled;
};

extern void __libkernel_init(const struct _libkernel_functions *libkernel_funcs, const char *envp[], const char *apple[], const struct ProgramVars *vars);

#endif