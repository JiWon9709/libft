/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:14:49 by jyou              #+#    #+#             */
/*   Updated: 2020/11/07 12:16:04 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_arr_len(char const *s, char c)
{
	size_t		count;
	int			i;

	count = 0;
	i = 0;
	if (!s[0])
		return (0);
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
	return (i);
}

static char			**check_err(char **arr)
{
	int		i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	char			**arr;
	char			*str;
	size_t			arr_len;
	size_t			i;
	size_t			start;

	if (!s || !c)
		return (NULL);
	arr_len = get_arr_len(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (arr_len + 1))))
		return (NULL);
	i = -1;
	start = 0;
	str = (char *)s;
	while (++i < arr_len)
	{
		start = get_str_start(str, c, start);
		if (!(arr[i] = (char *)malloc(sizeof(char)
						* (get_str_len(str, c, start) + 1))))
			return (check_err(arr));
		ft_strlcpy(arr[i], s + start, get_str_len(str, c, start) + 1);
		start = start + get_str_len(str, c, start);
	}
	arr[i] = NULL;
	return (arr);
}
