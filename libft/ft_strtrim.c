

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		size;

	if (!s1)
		return (0);
	i = 0;
	str = (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		s1++;
	size = ft_strlen(s1 + i);
	while (i < size && ft_strchr(set, s1[size]))
		size--;
	return (ft_substr(s1, 0, size + 1));
}
