int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*#include <ctype.h>
#include <stdio.h>
int main()
{
	char c;
	printf("%c", ft_toupper(c));
}*/