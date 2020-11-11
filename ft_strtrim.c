/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:05:56 by jyou              #+#    #+#             */
/*   Updated: 2020/11/11 15:45:12 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			find_begin(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int			find_end(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	int			begin;
	int			end;
	int			str_len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	begin = find_begin(s1, set);
	end = find_end(s1, set);
	if (begin >= end)
		return (ft_strdup(""));
	str_len = end - begin + 1;
	if (!(str = (char *)malloc(sizeof(char) * str_len)))
		return (ft_strdup(""));
	ft_strlcpy(str, s1 + begin, str_len);
	return (str);
}
