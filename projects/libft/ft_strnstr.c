#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (needle[0] == '\0')
    {
        return ((char *)haystack);
    }
    while (i < n && haystack[i])
    {
        j = 0;
        while (haystack[i + j] == needle[j] && needle[j] && haystack[i + j] && i + j < n)
        {
            j++;
        }
        if (needle[j] == '\0')
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}