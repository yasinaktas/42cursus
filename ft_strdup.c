#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

void    *ft_memcpy(void *dst, const void *src, size_t n)
  {
          size_t  index;
 
          index = 0;
          if (!dst && !src)
                  return (0);
          while (index < n)
          {
                  ((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
                  index++;
          }
          return (dst);
 }

char	*ft_strdup(const char *s1)
{
	char	*new_s1;

	if (!(new_s1 = (char *)malloc(ft_strlen((char *)s1))))
		return (0);
	ft_memcpy(new_s1, s1, ft_strlen((char *)s1));
	return (char *)(new_s1);
}

int main(){

printf("%s\n",strdup("yasin"));
printf("%s",ft_strdup("yasin"));

}
