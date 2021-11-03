#ifndef LIBASM_H
#define LIBASM_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>

long unsigned	ft_strlen(const char *str);
int 			ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strdup(const char *str);
ssize_t			ft_write(int fl, const void *buf, size_t byte);
ssize_t			ft_read(int fl, void *buf, size_t byte);

#endif