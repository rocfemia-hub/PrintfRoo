/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:38:13 by roo               #+#    #+#             */
/*   Updated: 2024/10/28 21:03:05 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* void	ft_printf_x(unsigned int n, int fd)
{
	if (n >= 16)
	{
		ft_printf_x((n / 16), fd);
		ft_printf_x((n % 16), fd);
	}
    else
    {
        if (n < 10)
        {
            n = n + 48;
        }
        else if (n > 9)
        {
            n = n + 87;
        }
	    ft_putchar_fd(n, fd);
    }
}
#include <stdio.h>
int main ()
{
    ft_printf_x(16, 1);
    printf("\n%x\n", 16);
    return(0);
} */

void    ft_printf_super_x(unsigned int n, int fd)
{
    if (n >= 16)
    {
        ft_printf_super_x ((n / 16), fd);
        ft_printf_super_x ((n % 16), fd);
    }
    else
    {
        if(n < 10)
        {
            n = n + 48;
        }
        else if(n > 9)
        {
            n = n + 55;
        }
        ft_putchar_fd(n, fd);
    }
}
#include <stdio.h>
int main()
{
    ft_printf_super_x(20, 1);
    printf("\n%X\n", 20);
    return (0);
}