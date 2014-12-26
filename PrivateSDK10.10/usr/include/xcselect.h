#ifndef __XCSELECT_H__
#define __XCSELECT_H__

#include <unistd.h>

typedef struct xcselect_manpaths {
	char **paths;
	uint32_t count;
} xcselect_manpaths;

xcselect_manpaths * xcselect_get_manpaths(char *sdkroot);
uint32_t xcselect_manpaths_get_num_paths(xcselect_manpaths *xcp);
const char * xcselect_manpaths_get_path(xcselect_manpaths *xcp, unsigned index);
void xcselect_manpaths_append(xcselect_manpaths *xcp, char *path);
void xcselect_manpaths_free(xcselect_manpaths *xcp);
bool xcselect_trigger_install_request(char *name);
void xcselect_invoke_xcrun(char *tool_name, int argc, char *argv[], int zero);

#endif
