

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    return (0);
}

/*int main()
{
    char s1[5]= "samet";
    char s2[5] ="samet";
    printf("%d \n",ft_strncmp(&s1,&s2,5));
    printf("%d",strncmp(s1,s2,4));
}*/
