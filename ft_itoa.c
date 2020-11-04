/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:04:36 by jyou              #+#    #+#             */
/*   Updated: 2020/11/01 17:32:06 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nn;

	len = 1;
	nn = n;
	while ((n = n / 10) != 0)
		len++;
	if (nn < 0)
	{
		if (!(str = (char *)malloc(sizeof(char) * (len + 2))))
			return (NULL);
		*str += '-';
	}
	else
	{
		if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
	}
	if (len == 1)
	{
		*str += nn % 10 + '0';
		*str += '\0';
		return (str);
	}
	while (len--)
	{
		if (len == 0)
		{
			*str += nn % 10 + '0';
			*str += '\0';
			break ;
		}
		*str += (nn / (10 * len)) + '0';
	}
	return (str);
}
