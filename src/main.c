#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(1, LONG_MIN + 1, 16, 1);
	return (0);
}
