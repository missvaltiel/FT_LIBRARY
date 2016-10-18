
#include "libft.h"

void        ft_putendl(char const *s)
{
    size_t      i;

    i = 0;
    if (s)
    {
        while (s[i] != '\0')
        {
            write(1, &s[i], 1);
            i++;
        }
        ft_putchar('\n');
    }
}

int        main()
{
    char *s = "HI MY NAME IS WHUT MY NAME IS WHO";
    ft_putendl(s);
    return (0);
}
