#include "libft.h"

static char *ft_strcpy(char *dest, const char *src, int *index)
{
    while (src[*index])
    {
        dest[*index] = src[*index];
        (*index)++;
    }
    dest[*index] = '\0';
    return (dest);
}

static char *ft_strcat(char *dest, const char *src)
{
    size_t dest_len;
    size_t i;

    i = 0;
    dest_len = ft_strlen(dest);
    while (src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *conc;
    size_t s1_len;
    size_t s2_len;
    int i;

    if (!s1 || !s2)
        return (NULL);
    i = 0;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    conc = malloc(s1_len + s2_len +1);
    if (!conc)
        return (NULL);
    conc = ft_strcpy(conc, s1, &i);
    conc = ft_strcat(conc, s2);
    return (conc);
}