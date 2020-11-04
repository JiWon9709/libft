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
static int	ten_mul(int len)
{
	if (len == 0)
		return (1);
	return (10 * ten_mul(len - 1));
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nn;
	int		i;

	len = 1;
	i = 0;
	nn = n;
	while ((n = n / 10) != 0)
		len++;
	if (nn < 0)
	{
		if (!(str = (char *)malloc(sizeof(char) * (len + 2))))
			return (NULL);
		str[i++] = '-';
	}
	else
	{
		if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
	}
	// if (len == 1)
	// {
	// 	str[i++] = nn % 10 + '0';
	// 	str[i] = '\0';
	// 	return (str);
	// }
	while (len-- && len >= 0)
	{
		if (len == 0)
		{
			str[i++] = nn % 10 + '0';
			str[i] = '\0';
			break ;
		}
		str[i++] += (nn / ten_mul(len)) + '0';
	}
	return (str);
}
