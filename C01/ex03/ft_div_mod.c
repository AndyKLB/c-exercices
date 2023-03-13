void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int div;
	int mod;
	
	a = 10;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d\nmod = %d", div, mod);
}
*/
