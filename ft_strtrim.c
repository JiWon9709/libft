/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:05:56 by jyou              #+#    #+#             */
/*   Updated: 2020/10/15 17:08:37 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		findset(char const *s1, char const *set)
{
	int		set_size;
	int		i;

	set_size = ft_strlen(set);
	begin = 0;
	while (i < set_size)
	{
		while (*set)
		{
			if (*(s1 + i) == *set)
			{
				set++;
				i++;
				begin++;
			}
			else
				set++;
		}
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		begin;
	int		end;
	int		set_size;
	int		i;

	str = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (!str)
		return (NULL);
	set_size = ft_strlen(set);
	begin = 0;
	i = 0;
	end = ft_strlen(s1);
	while (i < set_size)
	{
		while (*set)
		{
			if (*(s1 + i) == *set)
			{
				set++;
				i++;
				begin++;
			}
			else
				set++;
		}
		i++;
	}
	i = 0;
	while (i < set_size)
	{
		while (*set)
		{
			if (*(s1 + ft_strlen - 1 -i) == *set)
			{
				set++;
				i++;
				end--;
			}
			else
				set++;
		}
		i++;
	}
	str = substr(s1, begin, end);
	return (str);
}
