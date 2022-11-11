#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	((char *)dst)[i] = 0;
	return ((char *)dst);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	int test1[] = {1,2,3,4,5};
	//int test2[10] = "mozou";
	
	int i = 0;
	int n  = sizeof(test1)/sizeof(int);
	int tofill[n];
	i++;
	
	ft_memcpy(tofill,test1,sizeof(test1));
	i = 0;
	while(tofill[i])
	{
		printf(":%d:",tofill[i]);
		i++;
	}
	
}*/