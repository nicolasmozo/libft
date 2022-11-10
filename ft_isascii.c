int	ft_isascii(int c)
{
	if (c >= 00 && c <= 0177)
		return (1);
	return (0);
}
/*#include <stdio.h>
int main(int ac, char **av)
#include <ctype.h>
{
	printf("%d\n",ft_isascii(av[1][0]));
	printf("%d",isascii(av[1][0]));
}*/