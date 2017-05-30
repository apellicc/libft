#include "libft.h"

void	ft_putlongnbr(long long c)
{
	unsigned long long	nb;

	nb = c;
	if (c < 0)
	{
		ft_putchar('-');
		nb = -c;
	}
	if (nb > 9)
	{
		ft_putlongnbr(nb / 10);
		ft_putlongnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}
