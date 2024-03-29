/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 21:39:25 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/28 15:34:16 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(int fd, ssize_t n, char base, char frmt)
{
	int	bytes;

	bytes = 0;
	if (n < 0)
	{
		bytes += write(1, "-", 1);
		n = (-n);
	}
	return (ft_putunbr_base(fd, n, base, frmt) + bytes);
}
