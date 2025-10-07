#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
        return dest;

    if (d < s)
    {
        // no overlap or safe to copy forward
        while (n--)
            *d++ = *s++;
    }
    else
    {
        // overlap, copy backwards
        d += n;
        s += n;
        while (n--)
            *--d = *--s;
    }
    return dest;
}