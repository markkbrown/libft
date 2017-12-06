/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:06:35 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/05 20:26:28 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlen;
	size_t	i;

	i = 0;
	destlen = 0;
	while (dst[destlen] && destlen < size)
		destlen++;
	if (size < destlen)
		return (size + ft_strlen(src));
	while (src[i])
	{
		if (i < (size - destlen - 1))
			dst[destlen + i] = src[i];
		else
			break ;
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + ft_strlen(src));
}
