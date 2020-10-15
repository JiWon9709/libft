/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:56:54 by jyou              #+#    #+#             */
/*   Updated: 2020/10/15 15:05:54 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*c1;
	unsigned char		*c2;

	i = 0;
	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	if (!*c1 || !*c2)
		return (0);
	while (i < n && (*(c1 + i)) && (*(c2 + i)))
	{
		if (*(c1 + i) != *(c2 + i))
			return (*(c1 + i) - *(c2 + i));
		i++;
	}
	return (0);
}
