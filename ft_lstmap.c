/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:06:17 by mbrown            #+#    #+#             */
/*   Updated: 2017/12/05 18:56:07 by mbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*temp;
	t_list		*temp2;

	if (!lst)
		return (NULL);
	temp2 = f(lst);
	temp = temp2;
	while (lst->next)
	{
		lst = lst->next;
		temp2->next = f(lst);
		if (!(temp2->next))
			return (NULL);
		temp2 = temp2->next;
	}
	return (temp);
}
