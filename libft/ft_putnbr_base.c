/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 21:39:25 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/27 23:15:13 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(int fd, ssize_t n, char base, char frmt)
{
	int sign;

	sign = 0;
	if (n == ((0x8000000000000000 * -1) - 1))
		return (write(fd, "-9223372036854775808", 20));
	if (n < 0)
	{
		write(1, "-", 1);
		n = (-n);
		sign = 1;
	}
	return (ft_putunbr_base(fd, n, base, frmt) + sign);
}