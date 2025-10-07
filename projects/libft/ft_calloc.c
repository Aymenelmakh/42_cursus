#include "libft.h"

    void *ft_calloc(size_t nmemb, size_t size)
{
    void *p;

    if (size != 0 && nmemb > SIZE_MAX / size)
        return (NULL);
    p = malloc(nmemb * size);
    if (!p)
        return (NULL);
    ft_bzero(p, size * size);
    return (p);
    
}