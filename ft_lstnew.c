/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:58:22 by jyou              #+#    #+#             */
/*   Updated: 2020/11/09 13:58:26 by jyou             ###   ########.fr       */
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
