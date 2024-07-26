
#include "libft.h"

static char *new_str(const char *s1, size_t start, size_t len);
int to_trim(const char *set, char c);
char *ft_strtrim(char const *s1, char const *set)
{
    /*
        1- ilk olarak s1 i dönmeye başla fakat bir fonksiyon ile set in elemanları ile eşleşip eşleşmediğine bak eğer return 1 geliyorsa s1 i ilerlet. ve s1[i] yi kaydet.
        while(to_trim(..) == 1)
        i++;
        2 - strlen ile j belirlenmeli.bu işlem sondan başlayarak yapılmalı.
        while(to_trim(...) == 1)
        J--
        3 - s1 in kopyasını oluşturan bir fonk yapılmalı ve return olrak kopyası dönmeli. j-- olmalı.
     */
    int i;
    int j;
    
    i = 0;
    j = ft_strlen(s1) - 1;

    if (ft_strlen(s1) == 0)
        return (ft_strdup(""));
    while (to_trim(set, s1[i]))
        i++;
    while (to_trim(set,s1[j]))
        j--;
    return(new_str(s1,i, j - (i - 1)));
}

int to_trim(const char *set, char c)
{
    int i;
    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return(0);
    
}

static char *new_str(const char *s1, size_t start, size_t len)
{
    char *new_str;
    size_t i;
     if (len <= 0 || start >= ft_strlen(s1))
        return (ft_strdup(""));
    
    new_str = ft_calloc(len + 1,sizeof(char));

    if (!new_str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new_str[i] = s1[start + i];
        i++;
    }
    return(new_str);
    
}