
#include "libft.h"

char        *ft_strjoin(char const *s1, char const *s2)
{
    size_t      i;
    char        *res;

    i = ft_strlen(ft_strcat((char *)s1, s2));
    res = (char *)malloc(i + 1);
    if (res == NULL)
        return (NULL);
    ft_strcpy(res, s1);
    ft_strcat(res, s2);
    return (res);
}
/*
int         main()
{
    char src[50], dest[50];

    ft_strcpy(src, "yes" );
    ft_strcpy(dest, "Hello my name is ");

    ft_strjoin(dest, src);

    ft_putstr("Final destination string:");
    ft_putstr(dest);
    return (0);
}
*/
