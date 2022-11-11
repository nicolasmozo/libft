#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	dif;

	dif = (((char *)dst) - ((char *)src));
	if (dif >= len)
		ft_memcpy(dst, (void *)src, len);
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return ((char *)dst);
}
/*#include <stdio.h>
int main()
{
	char h[20] = "nicol";
	ft_memmove(&h[2], h, 3);

	int i = 0;
	while (i < sizeof(h))
	{
		printf("-%c-", h[i]);
		i++;
	}
}*/