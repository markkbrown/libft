/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:05:00 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/01 14:15:59 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		i++;
	}
	while (i > 0)
	{
		i--;
		dst--;
	}
	return (dst);
}
