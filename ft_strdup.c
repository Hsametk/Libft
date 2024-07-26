
#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t        i;
    char        *dest;

    i = 0;
    while (s1[i])
        i++;
    dest = (char*)malloc(sizeof(char) * (i + 1));
    if (!dest)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
/*int main()
 {
    char s1[] = "samet";

    char *s2;
    s2 = ft_strdup(s1);
    printf("%s",s2);
 }*/