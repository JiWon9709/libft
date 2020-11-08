/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou </var/mail/jyou>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:18:18 by jyou              #+#    #+#             */
/*   Updated: 2020/11/09 00:58:43 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*ptr;
	t_list		*next;

	ptr = *lst;
	while (ptr)
	{
		(*del)(ptr->content);
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*lst = NULL;
}
