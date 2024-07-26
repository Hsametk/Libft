
#include "libft.h"
#include <stdio.h>
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
 /*int main() {
    int c;

    printf("Bir sayı girin: ");
    scanf("%c", &c);

    if (ft_isdigit(c)) {
        printf("%c bir sayı.\n", c);
    } else {
        printf("%c bir sayı değildir.\n", c);
    }
}*/