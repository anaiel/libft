#include <unistd.h>

void	ft_printbits(char c)
{
	unsigned char	bit;

	bit = 128;
	while (bit)
	{
		if (bit & c)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bit = bit >> 1;
	}
}
