
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (s[k])
		k++;
	while (i <= k)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
