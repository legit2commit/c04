#include <unistd.h>
int	ft_isspace(char c)
{
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	else
		return (0);
}

int	ft_sign(char *x)
{
	int	min;

	min = 2;
	while (*x == '+' || *x == '-')
	{
		if (*x == '+')
			x++;
		else if (*x == '-')
		{
			min += 1;
			x++;
		}
	}
	return (min % 2);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	res;

	res = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (ft_sign(str))
		minus *= -1;
	while (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{		
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * minus);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%d",ft_atoi(av[1]));
	return (0);	
}
*/
