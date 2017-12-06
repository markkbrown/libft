/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:44:33 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/01 15:10:52 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	if ((ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
	{
		while (*s1 != '\0')
		{
			ret[i] = *s1;
			i++;
			s1++;
		}
		while (*s2 != '\0')
		{
			ret[i] = *s2;
			s2++;
			i++;
		}
	}
	else
		return (NULL);
	ret[i] = '\0';
	return (ret);
}
