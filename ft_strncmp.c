/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:07:13 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/04 20:28:08 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	if (*s1 == '\0' && *s2 != '\0')
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	while (*s1 != '\0' && i < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
	if (*s2 && i < n)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (0);
}
