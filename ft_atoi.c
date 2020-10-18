/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 17:08:39 by jyou              #+#    #+#             */
/*   Updated: 2020/10/18 18:40:32 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_space(const char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int		result;
	int		sign;
	int		i;
	int		count;

	result = 0;
	sign = 1;
	i = 0;
	count = 0;
	while (is_space(str + i))
		i++;
	while (*(str + i))
	{
		if (*(str + i) == '-')
			sign *= (-1);
		else if (*(str + i) == '+')
			;
		else if (*(str + i) <= '9' && *(str + i) >= '0')
		{
			result = *(str + i) - '0' + (result * 10);
			count++;
		}
		else
			break ;
		i++;
	}
	if (count >= 20 && sign == -1)
		return (0);
	if (count >= 20 && sign == 1)
		return (-1);
	return (sign * result);
}
