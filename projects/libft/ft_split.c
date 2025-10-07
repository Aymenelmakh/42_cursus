#include "libft.h"

static int check_delimiter(char c1, char c2)
{
    if (c1 == c2)
        return (1);
    return (0);
}

static int  count_word(const char *str, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (str[i] && check_delimiter(str[i], c))
        i++;
    while (str[i])
    {
        if (check_delimiter(str[i], c))
            i++;
        else
        {
            while (str[i] && !check_delimiter(str[i], c))
                i++;
            count++;
        }
    }
    return (count);
}

static char *ft_fill(const char *s, int *index, char c)
{
    char *copy;
    int i;
    int len;

    i = *index;
    len = 0;
    while (s[i] && check_delimiter(s[i], c))
        i++;
    *index = i;
    while (s[i] && !check_delimiter(s[i], c))
    {
        i++;
        len++;
    }
    copy = malloc(len + 1);
    if (!copy)
        return(NULL);
    i = 0;
    while(s[*index] && !check_delimiter(s[*index], c))
    {
        copy[i++] = s[(*index)++];
    }
    copy[i] = '\0';
    return (copy);
}

char **ft_split(char const *s, char c)
{
    char    **array;
    int num_words;
    int i;
    int ind;

    num_words = count_word(s, c);
    array = malloc((num_words + 1) * sizeof(char *));
    if (!array)
        return (NULL);
    i = 0;
    ind = 0;
    while(i < num_words)
    {
        array[i] = ft_fill(s, &ind, c);
        i++;
    }
    array[i]= NULL;
    return (array);
}