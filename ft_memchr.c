#include<string.h>
#include<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		index;
	unsigned char	*new_s;

	index = 0;
	new_s = (unsigned char *)s;
	while (new_s[index] != (unsigned char)c && index < n)
		index++;
	if (new_s[index] == (unsigned char)c && index < n)
		return (void *)(s + index);
	return (0);
}

int main(){

	printf("%s\n",(char *)memchr("y\0asin",'\0',3));
	printf("%s",(char *)ft_memchr("y\0asin",'\0',3));

}
