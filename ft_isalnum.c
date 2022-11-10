int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(int ac, char **av)
{
	printf("%d\n", ft_isalnum(av[1][0]));
	printf("%d", isalnum(av[1][0]));
}*/