#include "libftprintf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char	star;

	star = 'c';
	ft_printf("%p", &star);
}
