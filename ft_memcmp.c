
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

/*void test_memcmp(const char *s1, const char *s2, size_t n)
{
    int result_ft = ft_memcmp(s1, s2, n);
    int result_libc = memcmp(s1, s2, n);
    
    printf("Testing ft_memcmp and memcmp with strings: \"%s\" and \"%s\" (up to %zu bytes)\n", s1, s2, n);
    printf("Result of ft_memcmp: %d\n", result_ft);
    printf("Result of memcmp: %d\n", result_libc);
    if (result_ft == result_libc)
    {
        printf("The results are the same.\n\n");
    }
    else
    {
        printf("The results are different.\n\n");
    }
}

int main()
{
    // Test cases
    test_memcmp("samat", "samet", 5);
    test_memcmp("apple", "apple", 5);
    test_memcmp("hello", "world", 5);
    test_memcmp("test", "testing", 7);
    test_memcmp("abcd", "abcf", 4);
    
    return 0;
}*/