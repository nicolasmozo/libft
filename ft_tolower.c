int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*#include <ctype.h>
#include <stdio.h>
int main()
{
	char c = 'Z';
	printf("%c", tolower(c));
}*/