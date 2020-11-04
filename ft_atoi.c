/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 17:08:39 by jyou              #+#    #+#             */
/*   Updated: 2020/11/01 19:32:44 by jyou             ###   ########.fr       */
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

static int		check_sign(const char *str)
{
	int		count;
	int		i;

	count = 1;
	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count *= -1;
		if (str[i] == '+')
			count *= 1;
		i++;
	}
	return (count);
}

static int		check_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *str)
{
	int		result;
	int		sign;
	int		i;
	int		count;

	result = 0;
	i = 0;
	count = 0;
	sign = check_sign(str);
	while (is_space(str + i))
		i++;
	while (*(str + i) && check_num(str[i]))
	{
		result = *(str + i) - '0' + (result * 10);
		count++;
		i++;
	}
	if (count >= 20 && sign == -1)
		return (0);
	if (count >= 20 && sign == 1)
		return (-1);
	return (sign * result);
}
