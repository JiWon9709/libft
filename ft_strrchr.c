/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:06:23 by jyou              #+#    #+#             */
/*   Updated: 2020/11/01 17:30:06 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*next;

	str = (char *)s;
	if (c == '\0')
		return (str);
	while (*str)
	{
		if (*str == c)
			next = str;
		str++;
	}
	if (*next)
		return (next);
	else
		return (NULL);
}
