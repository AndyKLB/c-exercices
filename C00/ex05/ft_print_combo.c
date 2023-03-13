#include <unistd.h>

void	ft_display(int i, int j, int k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
}

void	ft_print_combo()
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_display(i, j, k);
				k++;
				if (i != '7')
					write (1, ", ", 2);

			}
			j++;
		}
		i++;
	}
}

int	main()
{
	ft_print_combo();
}
