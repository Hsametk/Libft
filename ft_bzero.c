
#include "libft.h"
void	ft_bzero(void *s, size_t n){

    ft_memset(s,0,n);
}

/*int main()
{
    char s[] = "samet";

    ft_bzero(s,5);
    printf("%s ",s);
}*/