/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:38:13 by roo               #+#    #+#             */
/*   Updated: 2024/11/13 18:04:22 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(unsigned long long n, int fd)
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
/* #include <stdio.h>
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
/*#include <stdio.h>
int main()
{
    ft_printf_super_x(20, 1);
    printf("\n%X\n", 20);
    return (0);
}*/
void	ft_printf_u(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_printf_u((n / 10), fd);
		ft_printf_u((n % 10), fd);
	}
	else
		ft_putchar_fd((n + '0'), fd);
}
/*#include <stdio.h>
int main()
{
    ft_printf_u(429496, 1);
    printf("\n%u\n", 429496);
    return (0);
}*/
void ft_printf_p(void *p, int fd)
{
    unsigned long long i;
    
    i = (unsigned long long)p;
    if (i == 0)
    {
        ft_putstr_fd("(nil)", 1);
        return (0);
    }
    ft_putstr_fd("0x", fd);
    ft_printf_x(i, fd);
}
/*#include <stdio.h>
int main()
{
    ft_printf_p(0, 1);
    printf("\n%p\n", 0);
    return (0);
}*/