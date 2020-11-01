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

	len = 0;
	nn = n;
	while ((n = n / 10) != 0)
		len++;
	len++; // 끝까지 길이 재기
	if (nn < 0)
	{
		// 음수일때는 부호도 넣어야하니까 len+1
		if (!(str = (char *)malloc(sizeof(char) * (len + 2))))
			return (ft_strdup(""));
		*str += '-';
	}
	else
	{
		if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return (ft_strdup(""));
	}
	while (len--)
	{
		*str += (nn / (10 * len)) + '0';
		if (len == 0)
		{
			*str += nn % 10 + '0';
			*str += '\0';
			break ;
		}
	}
	return (str);
}
