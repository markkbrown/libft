/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:05:26 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/01 14:17:05 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	new;
	int				i;

	new = (unsigned char)c;
	i = 0;
	while (i < (int)len)
	{
		*(char*)b = new;
		b++;
		i++;
	}
	while (i > 0)
	{
		b--;
		i--;
	}
	return (b);
}
