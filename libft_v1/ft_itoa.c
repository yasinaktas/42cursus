#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char	*ft_itoa(int n)
{
	long	nbr;
	long	multiplier;
	char	*str_nbr;
	int	index;

	if (!(str_nbr = (char *)malloc(1111)))
		return (0);
	index = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		str_nbr[index++] = '-';
	}
	multiplier = 1;
	while (nbr / multiplier > 10)
		multiplier *= 10;
	while (multiplier >= 1)
	{
		printf("%ld - %ld\n",nbr,multiplier);
		str_nbr[index] = (char)((nbr / multiplier) + '0');
		nbr = nbr % multiplier;
		multiplier = multiplier / 10;
		index++;
	}
	return (str_nbr);
}

int main(){

	printf("%s",ft_itoa(-2147483648));

}