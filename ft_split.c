/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:14:49 by jyou              #+#    #+#             */
/*   Updated: 2020/11/01 17:24:38 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_arr_len(char const *s, char c)
{
	size_t		count;
	int			i;

	count = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static size_t		get_str_start(char *next_str, char c, size_t start)
{
	int		i;

	i = 0;
	while (*(next_str + i + start) == c)
		i++;
	// while (*(next_str + i + start))
	// {
	// 	if (*(next_str + i + start) != c)
	// 		return (i + start);
	// 	i++;
	// }
	return (start + i);
}

static size_t		get_str_len(char *next_str, char c, size_t start)
{
	int		i;

	i = 0;
	while (*(next_str + i + start) == c)
		start++;
	while (*(next_str + start + i))
	{
		if (*(next_str + start + i) == c)
			return (i);
		i++;
	}
	return (0);
}

char				**ft_split(char const *s, char c)
{
	char			**arr;
	char			*str;
	size_t			arr_len;
	size_t			i;
	size_t			start;
	size_t			next_str_len;

	if (!s || !c)
		return (NULL);
	arr_len = get_arr_len(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (arr_len + 1))))
		return (NULL);
	i = 0;
	start = 0;
	str = (char *)s;
	while (i < arr_len)
	{
		start = get_str_start(str, c, start);
		next_str_len = get_str_len(str, c, start) + 1;
		if (!(*arr = (char *)malloc(sizeof(char) * next_str_len)))
		{
			while (*arr)
			{
				free(*arr);
				arr--;
			}
			free(arr);
			return (NULL);
		}
		ft_strlcpy(*arr, s + get_str_start(str, c, start), next_str_len);
		start = start + next_str_len;
		i++;
	}
	return (arr);
}
