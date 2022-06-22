#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int main(){

	printf("%s", ft_substr("ya\0sinaktas",0,3));

}
