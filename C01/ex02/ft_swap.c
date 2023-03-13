void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int	*ptr1;
	int	*ptr2;

	a = 10;
	b = 20;
	ptr1 = &a;
	ptr2 = &b;
	ft_swap(ptr1, ptr2);
	printf("a = %d\nb = %d\n", a, b);
	a = 34;
	b = 0;
	ft_swap(ptr1, ptr2);
	printf("a = %d\nb = %d\n", a, b);
	a = 80;
	b = 56;
	ft_swap(ptr1, ptr2);
	printf("a = %d\nb = %d\n", a, b);
}
*/
