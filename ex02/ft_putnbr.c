#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nbr;

	if (nb == -2147483648)
	{	
		write (1, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{	
		nbr = nb + '0';
		write (1, &nbr, 1);
	}
}
/*
int	main(void)
{
	int x;
	
	x = -1234;
	ft_putnbr(x);
}
*/
