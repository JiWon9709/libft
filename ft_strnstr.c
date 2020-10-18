/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:37:31 by jyou              #+#    #+#             */
/*   Updated: 2020/10/18 21:51:57 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t size)
{
	size_t	i;
	//size_t	n_len;
	size_t	n_size;

	i = 0;
	n_size = ft_strlen(n);
	if (n_size == 0 || !n)
		return ((char *)s);
	while (i < size) //*(s + i) != '\0'
	{
		//if (*s == *n)
		//{
			if (*s == *n && ft_memcmp(s, n, n_size) == 0)
				return ((char *)s);
		//}
		i++;
		s++;
	}
	return (NULL);
}
