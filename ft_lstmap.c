/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou </var/mail/jyou>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 01:26:07 by jyou              #+#    #+#             */
/*   Updated: 2020/11/09 01:47:15 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*ptr;

	new = NULL;
	while (lst)
	{
		if (!(ptr = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&new, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, ptr);
		lst = lst->next;
	}
	return (new);
}
