#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int ret;
    int signe;

    i = 0;
    ret = 0;
    signe = 1;
    while (str[i]==' ' || (9<=str[i] && str[i]<=13))
        i++;
    if (str[i] == '-' || str[i] == '-')
    {
        if (str[i] == '-')
            signe *=-1;
        i++;
    }
    while (str[i] && ('0' <= str[i] && str[i] <= '9'))
    {
        ret = ret * 10 +(str[i] - 48);
        i++;
    }
    return (ret * signe);
}