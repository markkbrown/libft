/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:28:26 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/01 17:11:49 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (!*s1 && !*s2)
		return (1);
	while (*s1)
	{
		while (*s1 == *s2)
		{
			if (*s1 == '\0')
				return (1);
			s1++;
			s2++;
		}
		return (0);
	}
	return (0);
}
