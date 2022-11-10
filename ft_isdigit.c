int	ft_isdigit(char nb)
{
	if (nb >= '0' && nb <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(int ac, char **av)
{
	printf("%d\n",ft_isdigit(av[1][0]));
	printf("%d",isdigit(av[1][0]));
}*/