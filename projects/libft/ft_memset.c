#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
    /*b is a void *, and in C:

   You cannot do arithmetic (b++, b + 1) with void *
   because the compiler doesn’t know the size of a void.

You also cannot dereference it (*b = ...).

So, we need to cast it to a real pointer type we can work with.
We choose unsigned char * because memory is filled byte by byte*/
    unsigned char *p = (unsigned char *)s;
    while (len > 0)
    {
        *p = (unsigned char)c;
        p++;
        len--;
    }
    return (s);
}
