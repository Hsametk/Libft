
#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int len;
    unsigned int i;
    char *res;
    len = ft_strlen(s);
    res = (void *) malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (i < len)
    {
        res[i] = (*f)(i, s[i]);
        i++;
    }
    return (res);
}