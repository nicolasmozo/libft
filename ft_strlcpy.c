#include "libft.h"
#include <stdio.h>


size_t  ft_strlcpy(char * dst, const char *  src, size_t dstsize)
{
    int i;

    i = 0;
    while(i <(int)dstsize -1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (i + 1);
}
//CHECK WHY RETURNS SMT DIFFERENT THAN THE ORIGINLA

#include <string.h>
// for why the -1 in the loop, check rules in the man 
int main()
{
    char src[10] = "nicolas";
    char dst[10] = "hol";
    //size_t size = sizeof(src);

    printf("%zu",strlcpy(dst,src,5));
    int i = 0;
    while(dst[i])
    {
        printf("%c", dst[i]);
        i++;
    }



}