int	ft_strlen(char *str)
{
	int	i;

	for (i = 0; str[i]; i++);

	return (i);
}

/*
#include <stdio.h>

int	main()
{
	char	*str = "Houria";

	printf("%d", ft_strlen(str));
}
*/
