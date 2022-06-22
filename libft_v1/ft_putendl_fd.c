#include<unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	while (s[index])
	{
		write (fd, &s[index], 1);
		index++;
	}
	write (fd, "\n", 1);
}

int main(){

	ft_putendl_fd("yasin",1);

}
