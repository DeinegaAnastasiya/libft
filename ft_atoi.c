#include "libft.h"

static int		ft_return(unsigned long long int res, long long int minus)
{
	if (res >= 9223372036854775807 && minus == 1)
		return (-1);
	if (res >= 9223372036854775807 && minus == -1)
		return (0);
	return (res * minus);
}

int				ft_atoi(const char *str)
{
	int				i;
	long long int	res;
	long long int	minus;

	i = 0;
	res = 0;
	minus = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + (long long int)(str[i] - 48);
		i++;
	}
	return (ft_return(res, minus));
}
