
#include "libft.h"

#include <stdio.h>
int ft_isalpha(int c)
{
    if (c >= 65 && c <= 122)
        return (1);
    else
        return (0);
}