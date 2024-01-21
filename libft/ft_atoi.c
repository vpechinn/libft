#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	m;
	int	i;
	int	max;

	max = 19;
	m = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (!max--)
			return ((1 + m) / (-2));
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * m);
}
