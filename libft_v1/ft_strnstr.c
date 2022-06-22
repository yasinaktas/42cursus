#include<string.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	is_same(const char *s1, const char *s2, size_t start)
{
	size_t	index;

	index = 0;
	while (index < (size_t)ft_strlen((char *)s2))
	{
		if (s1[start] != s2[index])
		return (0);
		index++;
		start++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;

	index = 0;
	if (ft_strlen((char *)needle) == 0)
		return (char *)(haystack);
	while (index < len && haystack[index])
	{
		if (is_same(haystack, needle, index))
			return (char *)(haystack + index);
		index++;
	}
	return (0);
}

int main(){

	printf("%s\n",strnstr("yasinaktas","k\0a",10));
	printf("%s",ft_strnstr("yasinaktas","k\0a",10));

}
