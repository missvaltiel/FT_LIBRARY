
#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    if (s1 && s2)
    {
        if ((ft_strncmp((char *)s1, (char *)s2, n)) == 0)
            return (1);
        else
            return (0);
    }
    return (0);
}
