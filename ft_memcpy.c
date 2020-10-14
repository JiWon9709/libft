/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 20:32:29 by jyou              #+#    #+#             */
/*   Updated: 2020/10/14 15:34:14 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *ptr, size_t num)
{
	char		*c;
	const char	*cc;
	size_t		i;

	i = 0;
	c = dest;
	cc = ptr;
	if ((!c && !cc) || !num)
		return (dest);
	while (i < num)
	{
		*(c + i) = *(cc + i);
		i++;
	}
	return (dest);
}
