/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:43:30 by rocfemia          #+#    #+#             */
/*   Updated: 2024/11/13 16:33:17 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_putstr_fd(char *s, int fd, int result)
{
	if (s == NULL)
	{
		result = result + write(1, "(null)", 6);
		//result = ft_strlen(s);
		return(result);
	}
	result = result + write(fd, s, ft_strlen(s));
	//result = ft_strlen(s);
	return(result);
}
/*#include <stdio.h>
int main() 
{
    int result = 0;

    char *str1 = "Hello, world!";
    result = ft_putstr_fd(str1, 1, result);
    printf("\nBytes escritos hasta ahora: %d\n", result);

    char *str2 = NULL;
    result = ft_putstr_fd(str2, 1, result);
    printf("\nBytes escritos hasta ahora: %d\n", result);

    char *str3 = "Another test!";
    result = ft_putstr_fd(str3, 1, result);
    printf("\nBytes escritos hasta ahora: %d\n", result);

    return 0;
}*/
/*#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	char *str = "patata";
	ft_putstr_fd(str, 1, 0);
	printf("\n%s\n", "patata");
	return(0);
}*/