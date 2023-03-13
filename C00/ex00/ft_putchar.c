#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

#include <stdio.h>
int main()
{
		ft_putchar('a');
		ft_putchar('b');
		ft_putchar('c');
		ft_putchar('d');
		ft_putchar('e');
		ft_putchar('f');
		ft_putchar('g');
		ft_putchar('h');
		ft_putchar('i');
		ft_putchar(48);
		ft_putchar(65);
}
