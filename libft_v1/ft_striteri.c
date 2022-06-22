#include<stdio.h>

void	ft_print(unsigned int index, char *str)
{
	printf("%u - %c\n", index, str[0]);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		f(index, (s + index));
		index++;
	}
}

int main(){

ft_striteri("yasin",ft_print);

}
