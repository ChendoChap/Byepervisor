#pragma once
#ifndef UTIL_H
#define UTIL_H

#include <sys/types.h>

uint64_t get_dmap_addr(uint64_t pa);

void *find_proc_by_name(const char *name);
void *get_proc_vmmap(void *proc);

void memcpy(void *dest, const void *src, size_t n);
size_t strlen(const char *str);
char *strstr(const char *str, const char *substring);
int strncmp(const char * s1, const char * s2, size_t n);

#endif // UTIL_H