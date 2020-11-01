/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.kr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:33:40 by jyou              #+#    #+#             */
/*   Updated: 2020/11/01 17:36:09 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (!(ptr = (void *)malloc(n * size)))
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
