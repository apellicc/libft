#include "libft.h"

int		ft_putswchar(wchar_t *value)
{
	int		t;
	int		ret;

	ret = 0;
	t = 0;
	while (value[t])
	{
		ret += ft_putwchar(value[t]);
		t++;
	}
	return (ret);
}
