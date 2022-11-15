#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (src[i])
		i++;
	len = i;
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}
/*#include <string.h>
#include <stdio.h>
// for why the -1 in the loop, check rules in the man 
int main()
{
	char src[10] = "nicolas";
	char dst[10] = "hol";
	//size_t size = sizeof(src);

	//printf("%zu\n",ft_strlcpy(dst,src,5));
	printf("-%zu-",strlcpy(dst,src,5));

	int i = 0;
	while(dst[i])
	{
		printf(":%c:", dst[i]);
		i++;
	}
}*/