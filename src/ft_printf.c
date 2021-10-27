/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:21:09 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/27 16:50:21 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_printfc(va_list args, char **format)
{
	if (**format == ('%'))
		return(ft_putchar_fd(**format, 1));
	else if (**format == ('c'))
		return(ft_putchar_fd(va_arg(args, int), 1));
	else if (**format == ('s'))
		return(ft_putstr_fd(va_arg(args, char *), 1));
	else if (**format == ('d') || **format == ('i'))
		return(ft_putnbr_fd(va_arg(args, int), 1));
	else if (**format == ('x'))
		return(ft_puthex_fd(va_arg(args, unsigned int), 0, 1));
	else if (**format == ('X'))
		return(ft_puthex_fd(va_arg(args, unsigned int), 1, 1));
	else if (**format == ('p'))	
		return(ft_puthex_fd((long)va_arg(args, void *), 1, 1));
	return (1);
}

static int	ft_printfm(char *format, va_list args, int *bytes)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_is(*format, "cspdiuxX%"))
				(*bytes) += ft_printfc(args, &format);
			else
				return (-1);
		}
		else
		{
			write(1, format, 1);
			(*bytes)++;
		}
		format++;
	}
	return (*bytes);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		bytes;

	bytes = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	bytes = ft_printfm((char *)format, args, &bytes);
	va_end(args);
	return (bytes);
}
