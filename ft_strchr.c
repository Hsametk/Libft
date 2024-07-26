
#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
    size_t i; 
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            return((char*)&s[i]);
        }
        i++;
    }
    if (i == '\0')
		return ((char *)s);
	return (0);
}

/*int main()
{
    char *s = "samet";
    printf("%s",ft_strchr(s,'a'));
    printf("%s",strchr(s,'a'));
}*/