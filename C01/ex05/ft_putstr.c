#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	for(i = 0; str[i]; i++)
		write(1, &str[i], 1);
}

/*
int	main()
{
	char	*str = "Houria";

	ft_putstr(str);
}
*/
