
#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	unsigned char *tmp_dst;
	unsigned char *tmp_src;
	if (dst == NULL || src == NULL)
		return dst;
	
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
		n--;
	}
	return(dst);

}

/*int main()
{
    char src[] = "samet";
    char dst[5];

    

    printf("%s",ft_memcpy(dst,src,5));
}*/