
#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    
    /* converting both s and c to unsigned char */
    str = (unsigned char *) s;
    uc =(unsigned char) c;
    i = 0;
    /* looping over n bytes */
    while (i < n)
    {
        /* same check as strchr */
        if (str[i] == uc)
        {
            return((void *)&str[i]);
        }
        i++;
    }
    return (0);
    
}

/*int main()
{
    char s[] = "Samet";
    printf("%s",ft_memchr(s,'a',4));
}*/