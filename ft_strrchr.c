#include "libft.h"
/*
    verilen kelimenin son bukunduğu yerden sonrasını döndürür.
*/
char	*ft_strrchr(const char *s, int c)
{ 
    int len;
    len = ft_strlen(s);
    while (len > 0)
    {
        if (s[len] == c)
        {
            return((char *)&s[len]);
        }
        len--;
    }
    return (0);
}

/*int main()
{
    char *s = "samet";
    printf("%s \n",ft_strrchr(s,'e'));
    printf("%s ",strrchr(s,'e'));
}*/