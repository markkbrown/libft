/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 17:20:20 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/07 17:18:23 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_find_next_prime(int nb)
{
	int isprime;
	int iter;

	iter = 0;
	isprime = 0;
	if (nb <= 2)
		return (2);
	while (isprime != 1)
	{
		isprime = ft_is_prime(nb + iter);
		iter++;
	}
	iter--;
	return (nb + iter);
}
