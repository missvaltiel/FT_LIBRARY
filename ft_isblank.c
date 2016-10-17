
#include "libft.h"

int     ft_isblank(int c)
{
    if (c == ' ' || c == '\f' || c == '\t' || c == '\r' || c == '\v' ||
            c == '\n')
        return (1);
    return (0);
}
