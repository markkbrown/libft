/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:38:58 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/04 19:44:05 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (!*s1 && !*s2)
		return (1);
	if (n == 0)
		return (1);
	while (i < n)
	{
		while (s1[i] == s2[i] && i < n)
		{
			if (s1[i] == '\0' || i == n - 1)
				return (1);
			i++;
		}
		return (0);
	}
	return (0);
}
