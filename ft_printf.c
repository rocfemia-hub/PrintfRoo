/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:54:56 by roo               #+#    #+#             */
/*   Updated: 2024/10/25 14:03:13 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//una función solo para saber que tipo de coversión es (saber que tipo de variable estás retornando)
int ft_printf(char const *str, ...)
{
    va_list vargs;
    int i;
    int result;
    
    while (str[i] != '\0')
    {}
    va_start(vargs, str);
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