
#include "libft.h"

char        *ft_strtrim(char const *s)
{
    size_t      i;
    size_t      len;
    char        *res = "test";

    if (s == NULL)
        return (NULL);
    len = ft_strlen((char *)s);
    while (ft_isblank(s[len - 1]) == 1)
        len--;
    i = -1;
    while (ft_isblank(s[++i]) == 1)
        len--;
//    if (len <= 0)
//        len = 0;
    res = (char *)malloc(len + 1);
    if (res == NULL)
        return (NULL);
    s += i;
    i = -1;
    while (++i < len)
        res[i] = *s++;
    res[i] = '\0';
    return (res);
}
/*
int         main()
{
    char const *s = "   \n  I really want this to work.   \n       ";

    ft_putstr(ft_strtrim(s));

    ft_putstr("\n");
    return (0);
}
*/
