/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:37:31 by jyou              #+#    #+#             */
/*   Updated: 2020/10/21 16:50:38 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t size)
{
	size_t	i;
	size_t	n_size;
	char	*sub;

	i = 0;
	n_size = ft_strlen(n);
	if (n_size == 0 || !*n)
		return ((char *)s);
	if (*s == '\0' || !s)
		return (NULL);
	sub = ft_substr(s, 0, size);
	while (i < size)
	{
		if (*sub == *n && ft_memcmp(sub, n, n_size) == 0)
			return ((char *)(s + i));
		i++;
		sub++;
	}
	return (NULL);
}
