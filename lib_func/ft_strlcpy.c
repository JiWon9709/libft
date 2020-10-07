/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:12:22 by jyou              #+#    #+#             */
/*   Updated: 2020/10/07 17:37:31 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	i = 0;
	while (*dest++)
		i++;
	return (i);
}

int main()
{
	char d1[100];
	char d2[100];
	printf("%d\n", (int)ft_strlcpy(d1, "abcdde", 5));
	printf("%s\n", d1);
	printf("%d\n", (int)strlcpy(d2, "abcdde", 5));
	printf("%s\n", d2);
}
