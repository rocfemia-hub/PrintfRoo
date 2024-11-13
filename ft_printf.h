/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:11:08 by roo               #+#    #+#             */
/*   Updated: 2024/11/13 18:50:52 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "Libft/libft.h"

// porque no se puede poner directamente la de ft_printf_utils.c ?
int	ft_printf(char const *str, ...);
int	ft_printf_x(unsigned long long n, int fd, int result);
int ft_printf_super_x(unsigned int n, int fd, int result);
int	ft_printf_u(unsigned int n, int fd, int result);
int ft_printf_p(void *p, int fd, int result);

#endif