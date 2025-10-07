#include "libft.h"

static int  count_bytes(int n)
{
    int count;
    long nb;

    nb = n;
    count = 0;
    if (nb == 0)
        return (1);
    if (nb < 0)
    {
        count++;
        nb = -nb;
    }
    while (nb > 0)
    {
        nb /= 10;
        count++;
    }
    return (count);
}

static void handle_negative(int *is_neg, long *nb, char *s)
{
    if (*nb < 0)
    {
        s[0] = '-';
        *is_neg = 1;
        *nb = -*nb;
    }
}

static void ft_swap(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

static void str_rev(char *str, int *index)
{
    size_t start;
    size_t  end;

    start = *index;
    end = ft_strlen(str) - 1;
    while (start < end)
    {
        ft_swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

static char    *convert(char *s, int nb)
{
    int i;
    int is_neg;
    long    n;

    is_neg = 0;
    n = nb;
    if (n == 0)
    {
        s[0] = '0';
        s[1] = '\0';
        return (s);
    }
    handle_negative(&is_neg, &n, s);
    i = is_neg;
    while (n > 0)
    {
        s[i++] = n % 10 + '0';
        n /= 10;
    }
    s[i] = '\0';
    str_rev(s, &is_neg);
    return (s);
}

char    *ft_itoa(int n)
{
    char    *str;
    
    str = malloc(count_bytes(n) + 1);
    if (!str)
        return (NULL);
    return (convert(str, n));
}