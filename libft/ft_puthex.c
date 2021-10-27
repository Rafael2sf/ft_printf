/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:26:13 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/27 21:44:04 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(int fd, unsigned int n, char mode)
{
	char	str[9];
	int		i;
	int		ret;
	char	c;
	
	i = 0;
	while (n > 0)
	{
		c = (n % 16);
		if (c < 10)
				str[i++] = c + '0';
		else
		{
			if (mode == 0)
				str[i++] = c + 'a' - 10;
			else
				str[i++] = c + 'A' - 10;
		}
		n = (n / 16);
	}
	ret = i;
	while (i--)
		write(fd, &str[i], 1);
	return (ret);
}
