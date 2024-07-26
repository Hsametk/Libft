
#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s2;
    size_t i;
     if (!s)
        return (NULL);

    if (start > ft_strlen(s))
        return(ft_strdup(""));

    if (len > ft_strlen(s + start))
         len = ft_strlen(s + start);
    
    s2 = (char *)ft_calloc(len + 1 , sizeof(char));
    
    if (!s2)
        return (NULL);
    
     i = 0;
    while (i < len)
    {
        s2[i] = s[start + i];
        i++;
    }
    return(s2);
}

/*int main()
{
    char s1[] = "samet kotu";
    char *s2;
    s2 = ft_substr(s1,2,4);
    printf("%s",s2);
}*/