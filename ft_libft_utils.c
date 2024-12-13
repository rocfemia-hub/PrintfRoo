/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 01:27:38 by rocfemia          #+#    #+#             */
/*   Updated: 2024/12/13 01:31:49 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd, int result)
{
	write(fd, &c, 1);
	result++;
	return (result);
}

int	ft_putnbr_fd(int n, int fd, int result)
{
	if (n == -2147483648)
	{
		result = ft_putstr_fd("-2147483648", fd, result);
	}
	else if (n < 0)
	{
		result = ft_putchar_fd('-', fd, result);
		result = ft_putnbr_fd(-n, fd, result);
	}
	else if (n > 9)
	{
		result = ft_putnbr_fd((n / 10), fd, result);
		result = ft_putnbr_fd((n % 10), fd, result);
	}
	else
		result = ft_putchar_fd((n + '0'), fd, result);
	return (result);
}

int	ft_putstr_fd(char *s, int fd, int result)
{
	if (s == NULL)
	{
		result = result + write(1, "(null)", 6);
		return (result);
	}
	result = result + write(fd, s, ft_strlen(s));
	return (result);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
