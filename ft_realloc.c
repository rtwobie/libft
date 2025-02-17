/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:44:32 by rha-le            #+#    #+#             */
/*   Updated: 2025/02/17 18:07:52 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t new_size)
{
	void	*new;

	new = malloc(new_size);
	if (!new)
		return (NULL);
	if (!new_size)
		return (ptr);
	if (ptr != NULL)
		ft_memcpy(new, ptr, new_size);
	return (free(ptr), new);
}
