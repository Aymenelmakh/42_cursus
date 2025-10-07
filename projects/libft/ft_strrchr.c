#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;
    int i;

    len = 0;
    while (s[len])
    {
        len++;
    }
    i = len - 1;
    while(i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)s + i);
        i--;
    }
    if (c == '\0')
    {
        return ((char *)s + len);
    }
    return (NULL);
}
