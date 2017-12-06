/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:39:57 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/04 18:56:53 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*temp2;

	temp = *alst;
	while (temp->next)
	{
		temp2 = temp->next;
		del(temp->content, temp->content_size);
		free(temp);
		temp = temp2;
	}
	del(temp->content, temp->content_size);
	free(temp);
	*alst = NULL;
}
