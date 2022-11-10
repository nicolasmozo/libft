int	ft_isprint(int c)
{
	if (c >= 040 && c <= 176)
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>
int main(int ac, char **av)
{
	printf("%d\n", ft_isprint(av[1][0]));
	printf("%d", isprint(av[1][0]));
}*/