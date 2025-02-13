/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:11:27 by rha-le            #+#    #+#             */
/*   Updated: 2025/02/13 17:58:19 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	int		i;
	long	num;
	long	sign;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	num = 0;
	while (ft_isdigit(nptr[i]))
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}

/*#include <stdio.h>*/
/*int main(void)*/
/*{*/
/*	printf("atol\n");*/
/*	printf("\nin: %s\t out: %d\n", "-2147483649", atol("-2147483649"));*/
/*	printf("\nin: %s\t out: %d\n", "2147483647", atol("2147483647"));*/
/*	printf("\nin: %s\t out: %d\n", "\\t\\v\\r 123", atol("\t\f\v\r 123"));*/
/*	printf("\nin: %s\t out: %d\n", "--123", atol("--123"));*/
/*	printf("\nin: %s\t out: %d\n", "+123", atol("+123"));*/
/*	printf("\nin: %s\t out: %d\n", "abc", atol("abc"));*/
/*	printf("\nin: %s\t out: %d\n", "123a4", atol("123a4"));*/
/**/
/*	printf("ft_atol\n");*/
/*	printf("\nin: %s\t out: %d\n", "-2147483649", ft_atol("-2147483649"));*/
/*	printf("\nin: %s\t out: %d\n", "2147483647", ft_atol("2147483647"));*/
/*	printf("\nin: %s\t out: %d\n", "\\t\\v\\r 123", ft_atol("\t\f\v\r 123"));*/
/*	printf("\nin: %s\t out: %d\n", "--123", ft_atol("--123"));*/
/*	printf("\nin: %s\t out: %d\n", "+123", ft_atol("+123"));*/
/*	printf("\nin: %s\t out: %d\n", "abc", ft_atol("abc"));*/
/*	printf("\nin: %s\t out: %d\n", "123a4", ft_atol("123a4"));*/
/*}*/
