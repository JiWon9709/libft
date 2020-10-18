/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:14:49 by jyou              #+#    #+#             */
/*   Updated: 2020/10/18 18:09:19 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_arr_len(char const *s, char c)
{
	int		count;

	count = 0;
	if (!*s)
		return (-1);
	if (*s == c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			count++;
			while (*(++s) == c)
				;
		}
		s++;
	}
	if (*(--s) != c)
		count++;
	return (count);
}

static int		get_str_len(char *next_str, char c)
{
	int		i;

	i = 0;
	while (*next_str)
	{
		if (*next_str == c)
			return (i + 1);
		i++;
		next_str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	char			*next_str;
	unsigned int	arr_len;
	unsigned int	i;
	unsigned int	start;
	unsigned int	next_str_len;

	arr_len = get_arr_len(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (arr_len + 1))))
		return (NULL);
	i = 0;
	start = 0;
	next_str = (char *)s;
	while (i < arr_len)
	{
		if (!(*arr = (char *)malloc(sizeof(char) * (next_str_len + 1))))
		{
			while (*arr)
			{
				free(*arr);
				arr++;
			}
			free(arr);
			return (NULL);
		}
		next_str_len = get_str_len(next_str, c);
		*arr = ft_substr(next_str, start, next_str_len);
		next_str = ft_substr(next_str, next_str_len + 1, ft_strlen(*arr) - (next_str_len + 1));
		i++;
	}
	return (arr);
}
