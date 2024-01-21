

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)b;
	while (n > 0)
	{
		p[i] = c;
		n--;
		i++;
	}
	return (b);
}
