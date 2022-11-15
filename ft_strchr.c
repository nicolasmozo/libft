char * ft_strchr(const char *s, int c)
{
    int i;
    char *cast_s = (char*)s;
    i = 0;

    while(s[i] + 1)
    {
        if(s[i] == c)
            return &cast_s[i];
            i++;
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "nicolas";
    char c = 0;
    printf("%p\n", strchr(s,c));
    printf("%p", &s[4]);
}