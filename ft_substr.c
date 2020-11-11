/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:03:10 by jyou              #+#    #+#             */
/*   Updated: 2020/11/11 20:19:26 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !sub)
		return (NULL);
	if (s_len < start)
		len = 0;
	ft_memmove(sub, s + start, len);
	*(sub + len) = '\0';
	return (sub);
}
