/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.kr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 01:12:39 by jyou              #+#    #+#             */
/*   Updated: 2020/09/30 01:12:39 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *ptr, int value, size_t num)
{
    int i;
    i = 0;
    while (i < num)
    {
        *ptr++ = value;
        i++;
    }
}

int main()
{
    char a[20];
    ft_memset(a, 65, sizeof(a));
    for(int i = 0; i < (sizeof(a)/sizeof(char)); i++){
        printf("%c\n", a[i]);
    }
    return (0);
}