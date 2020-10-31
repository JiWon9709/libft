/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:06:23 by jyou              #+#    #+#             */
/*   Updated: 2020/10/31 14:55:55 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*next;

	str = (char *)s;
	//str_len = ft_strlen(s);
	//if (c == '\0')
	//	return (str + ft_strlen(s));
	//str_len--;
	//while (*(str + str_len) != '\0')
	//{
	//	if (*(str + str_len) == c)
	//		return (str + str_len);
	//	str_len--;
	//}
	while (*str)
	{
		if (*str == c)
			next = str;
		str++;
	}
	if (c == '\0')
		return (str);
	if (*next)
		return (next);
	else
		return (NULL);
}
