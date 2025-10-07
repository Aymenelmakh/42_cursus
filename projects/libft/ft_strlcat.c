#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t len1;
    size_t len2;
    size_t i;

    len1 = ft_strlen(dest);
    len2 = ft_strlen(src);
    if (size<=len1)
    {
        return (size + len2);
    }
    i = 0;
    while (src[i] && i < size - len1 - 1)
    {
        dest[len1 + i] = src[i];
        i++;
    }
    dest[len1 + i] = '\0';
    return (len1 + len2);
}