/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:43:30 by rocfemia          #+#    #+#             */
/*   Updated: 2024/11/05 00:18:25 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)//creo que puedes poner 0 o NULL
	{
		ft_putstr_fd("(null)", fd);
	}
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	//write(fd, s, ft_strlen(s));//esto es lo mismo
}
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
//	char str[] = 0;
	ft_putstr_fd(0, 1);
	printf("\n%s\n", 0);
	return(0);
}