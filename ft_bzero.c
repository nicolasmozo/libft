#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	else
	{
		while (i < n)
		{
			((char *)str)[i] = 0;
			i++;
		}
	}
}
/*#include <strings.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	char test[10] = "nicolas";
	char test2[10] = "nicolas";
	int i = 0;
	bzero(&test[3], (0));
	ft_bzero(&test2[3], 0);
	while (test[i])
	{
		printf(":%c:", test[i]);
		i++;
	}
	i = 0;
	while (test2[i])
	{
		printf("-%c-", test2[i]);
		i++;
	}
}*/