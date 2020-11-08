/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou </var/mail/jyou>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:39:57 by jyou              #+#    #+#             */
/*   Updated: 2020/11/08 22:32:20 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*new_content;
	if (!(new_content = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new_content->content = content;
	new_content->next = NULL;
	return (new_content);
}
