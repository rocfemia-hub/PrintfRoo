/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:54:56 by roo               #+#    #+#             */
/*   Updated: 2024/10/28 20:59:53 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//una función solo para saber que tipo de coversión es (saber que tipo de variable estás retornando)
static void ft_conversions(va_list vargs, int i)
{
    if (i == 'c')
        ft_putchar_fd(va_arg(vargs, char), 1);
    else if (i == 's')
        ft_putstr_fd(va_arg(vargs, char *), 1);
    else if (i == 'p')
    else if (i == 'i' || i == 'd')
        ft_putnbr_fd(va_arg(vargs, int), 1)
    else if (i == 'u')
    else if (i == 'x')
        ft_printf_x(va_arg(vargs, unsigned int), 1);
    else if (i == 'X')
        ft_printf_super_x(va_args(vargs, unsigned int), 1);
    else if (i == '%')
        ft_putchar_fd('%', 1);
}
int ft_printf(char const *str, ...)
{
    va_list vargs;
    int i;
    int result;
    
    i = 0;
    va_start(vargs, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            ft_conversions(vargs, i);
        }
        else
        {
            ft_putchar_fd(str[i], 1);
        }
        i++;
    }
    va_arg(vargs, )
    va_end(vargs);
    return (result);
}
int main ()
{   
    int result;
    
    result = ft_printf("Patata %s\n", "Frita");
    ft_printf("%d\n", "El total de letas es: %d\n", result);
}