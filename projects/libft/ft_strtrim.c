#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int i;
    size_t j;
    size_t  len;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    j = ft_strlen(s1) - 1;
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (j > i && ft_strchr(set, s1[j]))
        j--;
    len = j - i + 1;
    return (ft_substr(s1, i, len));
}