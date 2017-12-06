/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:03:31 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/01 14:13:20 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	if ((int)n == 0)
		return ;
	else
	{
		while (i < (int)n)
		{
			*(char *)s = 0;
			s++;
			i++;
		}
	}
}