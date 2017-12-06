/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:42:47 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/04 19:32:50 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int		digitcount(int n)
{
	int	num;

	num = 1;
	while (n / 10 != 0)
	{
		num++;
		n /= 10;
	}
	if (n < 0)
		num++;
	return (num);
}

char			*ft_itoa(int n)
{
	char	*ret;
	int		numdigs;

	numdigs = digitcount(n);
	if (!(ret = (char *)malloc(numdigs + 1)))
		return (NULL);
	ret[numdigs] = '\0';
	if (n < 0)
	{
		ret[0] = '-';
		while (numdigs-- > 1)
		{
			ret[numdigs] = n % 10 * -1 + '0';
			n /= 10;
		}
	}
	else
	{
		while (numdigs-- > 0)
		{
			ret[numdigs] = n % 10 + '0';
			n /= 10;
		}
	}
	return (ret);
}
