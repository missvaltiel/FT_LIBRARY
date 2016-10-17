
#include "libft.h"

char        *ft_strtrim(char const *s)
{
    char        *buf;
    size_t      i;
    size_t      len;

    i = 0;
    buf = (char *)malloc(ft_strlen(s));
    if (buf == NULL)
        return (NULL);
    buf = ft_strcpy(buf, s);
    len = ft_strlen(s) - 1;
    if (s)
    {
        while (ft_isblank(buf[i]) == 1)
            i++;
        while (ft_isblank(s[len]) == 1)
            len--;
        while (i < len)
        {
            ft_putstr(buf);
            return (buf);
            i++;
        }

    }
    return (NULL);
}

int         main()
{
    char const *s = "    I really want this to work.    ";

    ft_strtrim(s);
    ft_putstr("\n");
    return (0);
}
