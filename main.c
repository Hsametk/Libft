#include "libft.h"
char *f(unsigned int i, char *c) {
    *c = *c + i;
}
int main()
{
    char s1[] = "hello";
    ft_striteri(s1,f);
    printf("%s",s1);
}
//gcc -w -w -w main.c -L. -lft
