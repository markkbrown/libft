/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:06:35 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/04 18:20:47 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlen;
	size_t	i;

	destlen = ft_strlen(dst);
	i = 0;
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
