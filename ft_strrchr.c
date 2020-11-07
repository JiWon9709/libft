/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:06:23 by jyou              #+#    #+#             */
/*   Updated: 2020/11/07 15:57:29 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*next;

	str = (char *)s;
	next = NULL;
	while (*str)
	{
		if (*str == c)
			next = str;
		str++;
	}
	if (c == *str)
		return ((char *)str);
	return (next);
}
