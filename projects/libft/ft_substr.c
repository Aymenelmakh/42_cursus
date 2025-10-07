#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;
    size_t s_len;

    s_len = ft_strlen(s);
    i = 0;
    if (start >= s_len)
        return (ft_strdup(""));
    if (len > s_len - start)
       len = s_len - start;
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);
    while (i < len)
    {
        sub[i] = s[i + start];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}