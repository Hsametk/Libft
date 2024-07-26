
#include "libft.h"

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
    
    size_t length;
    if (!dst && !src)
        return NULL;
    if (src < dst)
    {
        while (len--)
            *((unsigned char *)(dst + len)) = *((unsigned char *)(src + len)) ;
        
    }
    
    if (dst > src)
    {
        length = 0;
        while (length < len)
        {
            *((unsigned char *)(dst + len)) = *((unsigned char *)(src + len)) ;
            len++;
        }
        
    }
    
}  */


/*
    Burada memcpy den farkı overlap yani üst üste güvenli bir şekilde yazar overlap olduğu zaman sondan önce kopyalar olmadığı zaman baştan sona doğru.
    memcpy den daha güvenilirdir. ama overlap olmadğından eminsek memcpy kullanılmalı daha hızlıdır.
*/
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	if (src < dst)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	return (dst);
}
/*int main() 
{
    // Test Case 1: Overlapping memory regions, src before dst
    char str1[] = "Hello, World!";
    printf("Test Case 1 - Before: %s\n", str1);
    memmove(str1 + 7, str1, 5); // 'Hello' kelimesini 'World' kelimesinin üzerine kopyala
    printf("Test Case 1 - After: %s\n\n", str1);

    // Test Case 2: Overlapping memory regions, dst before src
    char str2[] = "Hello, World!";
    printf("Test Case 2 - Before: %s\n", str2);
    memmove(str2, str2 + 7, 6); // 'World!' kelimesini 'Hello' kelimesinin üzerine kopyala
    printf("Test Case 2 - After: %s\n\n", str2);

    // Test Case 3: Non-overlapping memory regions
    char src[] = "Goodbye!";
    char dst[20] = {0};
    printf("Test Case 3 - Before: src = %s, dst = %s\n", src, dst);
    memmove(dst, src, strlen(src) + 1); // 'Goodbye!' kelimesini dst'ye kopyala
    printf("Test Case 3 - After: src = %s, dst = %s\n\n", src, dst);
    return 0;
}*/