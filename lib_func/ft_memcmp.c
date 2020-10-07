/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:30:53 by jyou              #+#    #+#             */
/*   Updated: 2020/10/07 16:57:00 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*c1;
	const char	*c2;

	i = 0;
	c1 = s1;
	c2 = s2;
	while (i < n)
	{
		if ((*(c1 + i)) != (*(c2 + i)))
			return (*(c1 + i) - *(c2 + i));
		i++;
	}
	return (0);
}
