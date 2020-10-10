/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:06:23 by jyou              #+#    #+#             */
/*   Updated: 2020/10/10 15:35:34 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	int		i;
	int		size;

	i = 1;
	chr = c;
	size = 0;
	while (*(s + size))
		size++;
	while (*(s + size - i))
	{
		if (*(s + size - i) == chr)
			return ((char *)s + size - i);
		i++;
	}
	return (NULL);
}
