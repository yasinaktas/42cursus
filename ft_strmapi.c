#include<stdlib.h>

int	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	ft_change_char(unsigned int index, char ch)
{
	return (ch + index);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char		*new_str;

	if (!(new_str = (char *)malloc(ft_strlen(s))))
		return (0);
	index = 0;
	while (s[index])
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	return (new_str);
}

#include<stdio.h>
int main(){

	printf("%s",ft_strmapi("aaaaaa",ft_change_char));

}
