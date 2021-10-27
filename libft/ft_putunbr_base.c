/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:24:36 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/27 23:11:57 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_base(int fd, size_t n, char base, char frmt)
{
	char	c;

	if (n >= (size_t)base)
		ft_putunbr_base(fd, (n / base), base, frmt);
	c = (n % base);
	if (c >= 10)
	{
		if (frmt == 0)
			ft_putchar(fd, c + 'a' - 10);
		else
			ft_putchar(fd, c + 'A' - 10);
	}
	else
		ft_putchar(fd, c + '0');
	return (1);
}
