/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:32:09 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/28 14:43:40 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <limits.h>

int			ft_is(char c, char const *set);
int			ft_putchar(int fd, char c);
ssize_t		ft_putstr(int fd, char *s);
int			ft_putaddr(int fd, size_t addr);
int			ft_putnbr_base(int fd, ssize_t n, char base, char frmt);
int			ft_putunbr_base(int fd, size_t n, char base, char frmt);

#endif