/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:45:59 by rocfemia          #+#    #+#             */
/*   Updated: 2024/11/13 16:32:40 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(char c, int fd, int result)
{
	write(fd, &c, 1);
	result++;
	return (result);
}
/*#include <stdio.h>
int main (void)
{
	printf("\n%d", ft_putchar_fd('c', 1, 0));
	return(0);
}*/