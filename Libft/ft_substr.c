/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 23:07:34 by roo               #+#    #+#             */
/*   Updated: 2024/10/11 12:24:00 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *ptr;

    i = 0;
    j = 0;
    ptr = malloc(len * sizeof(char) + 1);
    if(!ptr)
        return(NULL);
    while (s[i++] != '\0')
    {
        if(s[i] == s[start])
        {
            while(j <= len)
            {
                ptr[j] = s[i];
                i++;
                j++;
            }
            ptr[i] = '\0';
            return(ptr);
        }
    }
    ptr[j] = '\0';
    return(ptr);
}
/*#include <stdio.h>
int main()
{
    printf("%s\n", ft_substr("Pisapapeles", 4, 4));
    return(0);
}*/