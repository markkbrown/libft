/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 15:50:48 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/07 17:16:24 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_nearestsqrt(int nb)
{
	int iter;

	iter = 0;
	while (iter * iter <= nb)
	{
		if (iter * iter == nb)
			return (iter);
		else if (iter > 46342)
			return (iter - 1);
		else
			iter++;
	}
	return (iter);
}

int				ft_is_prime(int nb)
{
	int div;
	int nearestsqr;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	div = 2;
	nearestsqr = ft_nearestsqrt(nb);
	while (div <= nearestsqr)
	{
		if (nb % div == 0)
			return (0);
		else
			div++;
	}
	return (1);
}
