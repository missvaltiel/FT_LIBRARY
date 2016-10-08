#include "libft.h"

void		ft_strclr(char *s)
{
	char		*buf;
	size_t		n;
	unsigned char	c;

	buf = (char *)s;
	i = ft_strlen(s);
	c = 'a';
	while (n > 0)
	{
		*buf = c;
		n--;
		buf++;
	}
}

int		main()
{
	char *str = "I really hope this works.";
	ft_putstr(str);
	ft_putchar('\n');
	ft_strclr(str);
	ft_putstr(str);
	return (0);
}
