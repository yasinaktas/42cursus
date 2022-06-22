#include<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	if (!s)
		return;
	index = 0;
	while (s[index])
	{
		write (fd, &s[index], 1);
		index++;
	}
}

int main(){

	ft_putstr_fd(0,1);

}
