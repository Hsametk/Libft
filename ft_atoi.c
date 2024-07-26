
#include "libft.h"
int	ft_atoi(const char *str)
{
    int res;
    int i;
    int neg;

    res = 1;
    i = 0;
    neg = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (str[i] - '0') +(res * 10);
    }
    return ( res * neg);
}