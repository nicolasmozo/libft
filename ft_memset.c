#include "libft.h"

void	*ft_memset(void *str, int c, size_t bytes)
{
	size_t	i;

	i = 0;
	while (i <= bytes--)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int i = 0;
	char str[10] = "nicolas";
	char str2[10] = "nicolas";

	ft_memset(str, '.', 2 * sizeof(char));
	memset(str2, '.', 2 * sizeof(char));
	while (str[i])
	{
		printf("-%c-", str[i]);
		i++;
	}write(1, "\n", 1);
	
	i = 0;
	while (str2[i])
	{
		printf("/%c/", str2[i]);
		i++;
	}
}*/