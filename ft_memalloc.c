/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:18:18 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/01 14:21:06 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		i;
	void	*ptr;

	i = 0;
	if (malloc(size) == NULL)
		return (NULL);
	else
	{
		ptr = malloc(size);
		while (i < (int)size)
		{
			*(char *)ptr = 0;
			ptr++;
			i++;
		}
		while (i > 0)
		{
			ptr--;
			i--;
		}
		return (ptr);
	}
}
