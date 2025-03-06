/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:11:27 by rha-le            #+#    #+#             */
/*   Updated: 2025/03/06 18:42:40 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *nptr)
{
	int			i;
	long long	num;
	long long	sign;

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
