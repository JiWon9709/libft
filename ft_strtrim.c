/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:05:56 by jyou              #+#    #+#             */
/*   Updated: 2020/11/01 17:34:30 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		find_begin(char const *s1, char const *set)
{
	size_t		i;
	size_t		begin;

	i = 0;
	begin = 0;
	while (*(set + i))
	{
		if (*(s1 + begin) != *(set + i) && *(set + i + 1) == '\0')
			return (begin);
		if (*(s1 + begin) == *(set + i))
		{
			begin++;
			i = -1;
		}
		i++;
	}
	return (0);
}

static size_t		find_end(char const *s1, char const *set)
{
	size_t		i;
	size_t		s1_len;

	i = 0;
	if (!s1)
		return (0);
	s1_len = ft_strlen(s1) - 1;
	while (*(set + i) && *(s1 + s1_len))
	{
		if (*(s1 + s1_len) != *(set + i) && *(set + i + 1) == '\0')
			return (s1_len);
		if (*(s1 + s1_len) == *(set + i))
		{
			s1_len--;
			i = -1;
		}
		i++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		begin;
	size_t		end;
	int			str_len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	begin = find_begin(s1, set);
	if (begin == ft_strlen(s1))
		return (ft_strdup(""));
	end = find_end(s1, set);
	str_len = end - begin + 2;
	if (!(str = (char *)malloc(sizeof(char) * str_len)))
		return (ft_strdup(""));
	ft_strlcpy(str, s1 + begin, str_len);
	return (str);
}
