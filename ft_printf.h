/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:11:08 by roo               #+#    #+#             */
/*   Updated: 2024/12/13 01:25:44 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

// porque no se puede poner directamente la de ft_printf_utils.c ?
int		ft_printf(char const *str, ...);
int		ft_printf_x(unsigned long long n, int fd, int result);
int		ft_printf_super_x(unsigned int n, int fd, int result);
int		ft_printf_u(unsigned int n, int fd, int result);
int		ft_printf_p(void *p, int fd, int result);

size_t	ft_strlen(const char *s);
int		ft_putchar_fd(char c, int fd, int result);
int		ft_putstr_fd(char *s, int fd, int result);
int		ft_putnbr_fd(int n, int fd, int result);

#endif