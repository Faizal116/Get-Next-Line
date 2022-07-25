#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	length;
	size_t	i;

	length = ft_strlen(str) + 1;
	dup = (char *)malloc(length);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < length)
	{
		((unsigned char *)dup)[i] = ((unsigned char *)str)[i];
		i++;
	}
	return (dup);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*catted;
	size_t	len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	catted = malloc((len + 1) * sizeof(char));
	if (!catted)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		catted[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		catted[i] = *s2++;
		i++;
	}
	catted[i] = '\0';
	return (catted);
}