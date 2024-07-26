
#include "libft.h"

int     isascii(int c)
{
    if ( c >= 32 && c <= 132)
        return (1);
    return (0);
    
}