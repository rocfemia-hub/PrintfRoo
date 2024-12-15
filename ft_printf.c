/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:54:56 by roo               #+#    #+#             */
/*   Updated: 2024/12/15 18:44:06 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversions(va_list vargs, int i, int result)
{
	if (i == 'c')
		result = ft_putchar_fd(va_arg(vargs, int), 1, result);
	else if (i == 's')
		result = ft_putstr_fd(va_arg(vargs, char *), 1, result);
	else if (i == 'p')
		result = ft_printf_p(va_arg(vargs, void *), 1, result);
	else if (i == 'i' || i == 'd')
		result = ft_putnbr_fd(va_arg(vargs, int), 1, result);
	else if (i == 'u')
		result = ft_printf_u(va_arg(vargs, unsigned int), 1, result);
	else if (i == 'x')
		result = ft_printf_x(va_arg(vargs, unsigned int), 1, result);
	else if (i == 'X')
		result = ft_printf_super_x(va_arg(vargs, unsigned int), 1, result);
	else if (i == '%')
		result = ft_putchar_fd('%', 1, result);
	return (result);
}

int	ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		i;
	int		result;

	i = 0;
	result = 0;
	va_start(vargs, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			result = ft_conversions(vargs, str[i], result);
		}
		else
		{
			result = ft_putchar_fd(str[i], 1, result);
		}
		i++;
	}
	va_end(vargs);
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	char a = 'a';
	char *str = "Patata";
	int b = -3;
	int c = 3;
	int d = 10;

	ft_printf("\n");
	
	ft_printf("Roo 1: %c\n", a);
	ft_printf("Roo 2: %s\n", str);
	ft_printf("Roo 3: %p\n", str);
	ft_printf("Roo 4: %i\n", c);
	ft_printf("Roo 5: %d\n", b);
	ft_printf("Roo 6: %u\n", b);
	ft_printf("Roo 7: %x\n", d);
	ft_printf("Roo 8: %X\n", d);
	ft_printf("Roo 9: %%\n");

	printf("\n");
	
	printf("Original 1: %c\n", a);
	printf("Original 2: %s\n", str);
	printf("Original 3: %p\n", str);
	printf("Original 4: %i\n", c);
	printf("Original 5: %d\n", b);
	printf("Original 6: %u\n", b);
	printf("Original 7: %x\n", d);
	printf("Original 8: %X\n", d);
	printf("Original 9: %%\n");

	return (0);
}*/