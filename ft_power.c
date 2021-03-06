/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 16:59:10 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/07 17:03:24 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	int ret;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	ret = 1;
	while (power-- > 0)
		ret *= nb;
	return (ret);
}
