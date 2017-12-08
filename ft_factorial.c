/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 16:45:29 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/07 16:57:41 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_factorial(int nb)
{
	int	i;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	i = nb;
	while (i-- > 1)
		nb *= i;
	return (nb);
}