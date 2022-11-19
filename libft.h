#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>


void	*ft_memcpy(void *dst, void *src, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_atoi(const char *str);


const char INT_MAX [] = "2147483647";
const char INT_MIN [] = "-2147483648";

#endif