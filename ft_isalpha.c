int	ft_isalpha(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(int ac, char** av)
{
    printf("%d\n", ft_isalpha(av[1][0]));
    printf("%d",isalpha(av[1][0]));
}*/