int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	//const char s = av[1][0];
	printf("%d\n", ft_strlen(&av[1][0]));
	printf("%lu\n", strlen(&av[1][0]));
}*/