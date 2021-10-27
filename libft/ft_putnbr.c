/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:41:56 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/27 21:43:00 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int fd, int n)
{
	char	buffer[11];
	short	i;
	int		ret;
	
	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		buffer[10] = '-';
		n = (-n);
	}
	while (n > 0)
	{
		buffer[i++] = (n % 10) + ((int)('0'));
		n = (n / 10);
	}
	ret = i;
	if (buffer[10] == '-')
		buffer[i++] = '-';
	while (i--)
		write(fd, &buffer[i], 1);
	return (ret);
}
