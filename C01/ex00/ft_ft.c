void	ft_ft(int *nbr)
{
	*nbr = 42;	
}

#include <stdio.h>
int	main()
{
	int	nbr;
	int	*ptr;

	ptr = &nbr;
	ft_ft(ptr);
	printf("%d\n", nbr);
	printf("%d\n", *ptr);
	nbr = 24;
	printf("%d\n", *ptr);
	printf("%d\n", nbr);
	ft_ft(&nbr);
	printf("%d\n", *ptr);
	printf("%d\n", nbr);
}
