/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:05:56 by jyou              #+#    #+#             */
/*   Updated: 2020/10/21 19:03:24 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*check_set(char const *s1, char const *set)
{
	int		i;

	i = 0;
	while (*s1)
	{
		i = 0;
		while (*(set + i))
		{
			if (*s1 != *(set + i))
				return (char *)(s1);
			else
				break ;
			i++;
		}
		s1++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*begin;
	char	*end;
//	int		set_size;

	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s1))))
		return (ft_strdup(""));
//	set_size = ft_strlen(set);
	begin = check_set(s1, set);
	while (!*set)
	{
		if (!ft_strrchr(s1, *set))
			end = ft_strrchr(s1, *set);
		set++;
	}
	str = ft_substr(s1, ft_strlen(begin), ft_strlen(end) - ft_strlen(begin));
	return (str);
}
