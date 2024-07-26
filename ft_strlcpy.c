

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{

   /*
   ---dizeyi her zaman NUL ile sonlandırır.
   Eğer dizeyi kesmeden NUL ile sonlandıracak kadar uzun bir dstsize verirseniz, strlcpy() strcpy() ile yaptığınız gibi dizeyi kopyalayacaktır. Yeterince uzun bir dstsize vermezseniz, kaynaktan hedefe dstsize - 1 karakter kopyalar ve bundan sonra NUL-sonlandırma karakterini ekler.

   strlcpy() fonksiyonu her zaman oluşturmaya çalıştığı dizenin uzunluğunu döndürür, bu src'nin uzunluğudur, dizeyi NUL ile sonlandırmak için kesmeniz gerekse bile.
   */
   size_t i;

   i = 0;

   if (dstsize > 0)
   {
      while (i < (dstsize -1) && src[i])
      {
         dst[i] = src[i];
         i++;
      }
      dst[i] = 0;
   } 
   while (src[i])
      i++;
   return(i);
}