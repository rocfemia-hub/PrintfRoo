/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 03:01:35 by roo               #+#    #+#             */
/*   Updated: 2024/11/30 20:58:07 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*#include <stdio.h>
int   main()
{
	printf("\n%d", ft_putnbr_fd(-2147483648, 1, 0)); 
	//con 2147483648 sale negativo, xq?
	return (0);
}*/
/*#include <stdio.h>
int main() 
{
    int result = 0;
    
    int num1 = 12345;
    ft_putnbr_fd(num1, 1, &result);
    printf("\nBytes escritos para num1: %d\n", result);

    result = 0;

    int num2 = -9876;
    ft_putnbr_fd(num2, 1, &result);
    printf("\nBytes escritos para num2: %d\n", result);

    result = 0;

    int num3 = -2147483648;
    ft_putnbr_fd(num3, 1, &result);
    printf("\nBytes escritos para num3: %d\n", result);

    return (0);
}*/