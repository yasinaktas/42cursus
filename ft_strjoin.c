#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int	index;

	if (!s1 || !s2 || !(new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	index = 0;
	while (s1[index])
	{
		new_str[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
	{
		new_str[index + ft_strlen(s1)] = s2[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

int main(){

	printf("%s",ft_strjoin(0,"aktas"));
}
