/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:07:00 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/01 13:07:02 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int	i;
	int	destlen;

	destlen = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0' && i < (int)n)
	{
		s1[destlen + i] = s2[i];
		i++;
	}
	s1[destlen + i] = '\0';
	return (s1);
}
