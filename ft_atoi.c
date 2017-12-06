/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:03:19 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/04 19:38:17 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WS(x) (x >= '\t' && x <= '\r' ||  x == ' ')

int	ft_atoi(const char *str)
{
	int			num;
	int			sign;

	num = 0;
	sign = 1;
	while (WS(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (!WS(*str) && *str >= 48 && *str <= 57)
	{
		num = (num * 10) + *str++ - '0';
	}
	return (num * sign);
}
