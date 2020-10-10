/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:37:31 by jyou              #+#    #+#             */
/*   Updated: 2020/10/10 16:56:36 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s, const char *n, size_t size)
{
	size_t	i;
	size_t	n_len;
	size_t	n_size;

	i = 0;
	n_size = 0;
	while (*(n + n_size))
		n_size++;
	if (n_size == 0)
		return ((char *)s);
	while (*(s + i) && i < size)
	{
		if (*(s + i) == *n)
		{
			n_len = 0;
			while (*(n + n_len) && *(s + i + n_len) == *(n + n_len))
			{
				n_len++;
			}
			if (n_len == n_size)
				return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
