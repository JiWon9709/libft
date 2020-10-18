/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:06:23 by jyou              #+#    #+#             */
/*   Updated: 2020/10/18 21:04:45 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		str_len;

	str = (char *)s;
	str_len = ft_strlen(s);
	if (c == '\0')
		return (str + str_len);
	str_len--;
	while (*(str + str_len) != '\0')
	{
		if (*(str + str_len) == c)
			return (str + str_len);
		str_len--;
	}
	return (NULL);
}
