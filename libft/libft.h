/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:32:09 by rafernan          #+#    #+#             */
/*   Updated: 2021/10/27 16:27:03 by rafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int			ft_putchar_fd(char c, int fd);
int			ft_putnbr_fd(int n, int fd);
ssize_t		ft_putstr_fd(char *s, int fd);
int			ft_is(char c, char const *set);
int			ft_puthex_fd(unsigned int n, char mode, int fd);

#endif