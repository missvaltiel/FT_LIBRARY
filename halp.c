
#include <unistd.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n);
size_t	ft_strlen(const char *str);

int	main()
{
	char buffer[] = "Yeess I love it\n\n";
	write(1, buffer, ft_strlen(buffer));
	ft_bzero(buffer, 4);
	write(1, "wtf\n\n", 5);
	write(1, buffer, 17);
	return (0);
}
