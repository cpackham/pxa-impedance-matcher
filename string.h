#ifndef _STRING_H
#define _STRING_H

int strlen(const char *);
int strncmp(const char *, const char *, int);
void *gethexaddr(const char *, const char **);
int getaddrs(void **, void **, const char *);

#endif