#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *p=(unsigned char *)dest;
    const unsigned char *s=(const unsigned char *)src;
    
    while(n > 0)
    {
        *p=*s;
        p++;
        s++;
        n--;
    }
    return (dest);
}