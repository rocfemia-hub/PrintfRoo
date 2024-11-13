/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:58:41 by rocfemia          #+#    #+#             */
/*   Updated: 2024/11/13 13:48:01 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int	ft_putchar_fd(char c, int fd, int result);
int	ft_putstr_fd(char *s, int fd, int result);
int	ft_putnbr_fd(int n, int fd, int result);

#endif