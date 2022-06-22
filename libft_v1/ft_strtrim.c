#include<string.h>
#include<stdio.h>
#include<stdlib.h>


int	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	index;

	if (!(sub_str = (char *)malloc(len)))
		return (0);
	index = 0;
	while (index < len && s[start])
	{
		sub_str[index] = s[start];
		index++;
		start++;
	}
	return (sub_str);
}

int	is_in_set(char ch, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == ch)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	char	*s2;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_in_set(s1[start], set))
		start++;
	while (is_in_set(s1[end], set))
		end--;
	if (!s1 || !set || !(s2 = (char *)malloc(end - start + 1)))
		return (0);
	return (ft_substr(s1, start, end - start + 1));
}

int main(){

	printf("%s",ft_strtrim("yasinaktas","yas"));

}