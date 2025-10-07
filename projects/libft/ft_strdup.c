#include "libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    int len;
    char *copy;

    len = ft_strlen((char *)s);
    i = 0;
    copy = malloc(len + 1);
    if (!copy)
    {
        return (NULL);
    }
    while (s[i])
    {
        copy[i] = s[i];
        i++;
    }
    copy[i]='\0';
    return (copy);
}