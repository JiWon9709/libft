/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:50:49 by jyou              #+#    #+#             */
/*   Updated: 2020/10/14 16:24:10 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		chr;
	int			i;

	i = 0;
	chr = c;
	while (*(s + i))
	{
		if (*(s + i) == chr)
			return ((char *)s + i);
		i++;
	}
	if (chr == '\0')
		return ((char *)s + i);
	return (NULL);
}
