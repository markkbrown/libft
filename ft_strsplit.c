/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 19:23:57 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/05 18:06:13 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**ret;
	int		word_len;

	i = 0;
	if (!(s && c) || !(ret = malloc(sizeof(ret) * (wordcount(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		word_len = 0;
		while (s[word_len] != c && s[word_len] != '\0')
			word_len++;
		ret[i] = malloc(word_len + 1);
		j = 0;
		while (*s != c && *s != '\0')
			ret[i][j++] = *s++;
		ret[i++][j] = '\0';
	}
	ret[i] = NULL;
	return (ret);
}
