#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  len;

    i = 0;
    len = 0;
    while (src[len])
    {
        len++;
    }
    if (size == 0)
    {
        return (len);
    }
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i]='\0';
    return (len);
}