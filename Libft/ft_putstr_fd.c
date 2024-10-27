/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:43:30 by rocfemia          #+#    #+#             */
/*   Updated: 2024/10/01 15:30:30 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*#include <fcntl.h>
int	main(void)
{
	char str[] = "picota";
    int fd = open("pipa.txt", O_WRONLY);
	ft_putstr_fd(str, fd);
	return(0);
}*/