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

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] == '-' || str[i + 1] == '+')
				return (-1);
			count++;
		}
		if (str[i] <= '9' && str[i] >= '0')
		{
			if (str[i + 1] == '-' || str[i + 1] == '+')
				return (i);
		}
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
	int		sign_count;

	result = 0;
	sign = 1;
	i = 0;
	count = 0;
	sign_count = check_sign(str);
	while (is_space(str + i))
		i++;
	while (*(str + i))
	{
		if (sign_count == -1)
			return (0);
		if (*(str + i) == '-' && !check_num(str[i + 1]))
			sign *= (-1);
		else if (*(str + i) == '+' && !check_num(str[i + 1]))
			sign *= 1;
		else if (check_num(str[i]))
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
