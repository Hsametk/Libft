
#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    size_t s1_len;
    size_t s2_len;
    size_t i , j;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    new_str = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));

    if (!new_str)
        return (NULL);
    
    i = 0;
    while (s1[i])
    {
        new_str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        new_str[i] = s2[j];
        j++;
        i++;
    }
    new_str[i] = 0;
    return (new_str);
}
