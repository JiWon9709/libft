/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:05:56 by jyou              #+#    #+#             */
/*   Updated: 2020/10/18 15:00:05 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*begin;
	char	*end;
	int		set_size;
	int		i;

	str = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (!str)
		return (NULL);
	set_size = ft_strlen(set);
	i = 0;
	while (!*set)
	{
		if (!ft_strnstr(s1, set, set_size))
			begin = ft_strchr(s1, *set);
		set++;
	}
	while (!*set)
	{
		if (!ft_strrchr(s1, *set))
			end = ft_strrchr(s1, *set);
		set++;
	}
	str = ft_substr(s1, ft_strlen(begin), end - begin);
	return (str);
}
