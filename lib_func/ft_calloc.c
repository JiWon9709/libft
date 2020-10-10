/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:33:40 by jyou              #+#    #+#             */
/*   Updated: 2020/10/10 19:51:36 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void		*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	ptr = (void *)malloc(sizeof(n) * size);
	if (!ft_memset(ptr, 0x00, sizeof(n) * size))
			return (NULL);
	return (ptr);
}
