/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:51:50 by jyou              #+#    #+#             */
/*   Updated: 2020/10/10 19:56:42 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strdup(const char *s)
{
	const char	*ptr;
	int			i;

	i = 0;
	ptr = (char *)malloc(sizeof(s));
	while (*(s + i))
	{
		*(ptr + i) = *(s + i);
		i++;
	}
	return ((char *)ptr);
}
