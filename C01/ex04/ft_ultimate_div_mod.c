void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;

	a = 20;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\nb = %d", a, b);
}
*/
