/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:03:09 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/01 13:03:11 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*cpy;

	i = -1;
	cpy = (char *)malloc(sizeof(*cpy) * (ft_strlen(s1) + 1));
	if (cpy)
	{
		while (s1[++i])
			cpy[i] = s1[i];
		cpy[i] = '\0';
	}
	return (cpy);
}
