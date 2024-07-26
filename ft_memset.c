
#include "libft.h"
void    *ft_memset(void *b, int c, size_t len)
{
   unsigned char *tmp;
    tmp = (unsigned char *)b;
    while (len > 0)
    {
        *(tmp++) = (unsigned char)c;
        len--;
    }
    return(b);
}

/*int main()
{
    char s[] = "samet";

    ft_memset(s,'c',5);
    printf("%s ",s);
}*/