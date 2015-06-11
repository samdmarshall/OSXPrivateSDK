#ifndef __ESP_H__
#define __ESP_H__

#include <sandbox/private.h>
#include <xpc/private.h>

int __esp_enabled();
int __esp_check(char *key, xpc_object_t dict);

#endif
