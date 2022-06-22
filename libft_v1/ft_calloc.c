#include<stdlib.h>
#include<stdio.h>

void    *ft_memset(void *dst, int ch, size_t len)
{
          size_t  index;
          unsigned char* new_dst;
 
          index = 0;
          new_dst = (unsigned char *)dst;
          while (index < len)
          {
                  new_dst[index] = (unsigned char)ch;
                  index++;
          }
          return dst;
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*dst;

	total = count * size;
	if (!(dst = malloc(total)))
		return (0);
	ft_memset(dst, 0, total);
	//ft_memset(dst,'a',total);
	return (dst);
}

int main(){

 char *str = ft_calloc(2,2);
 if(!str)
 	return (0);
 int index = 0;
 while (index < 4){
	printf("%c-",str[index]);
	index++;
 }

}
