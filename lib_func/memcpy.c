/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.kr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 20:32:29 by jyou              #+#    #+#             */
/*   Updated: 2020/09/30 20:32:29 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

void    *ft_memcpy(void *dest, const void *ptr, size_t num)
{
    char *c;
    size_t i;
    i = 0;
    while (i < num)
    {
        *(dest + i++) = *(ptr + i++);
    }
}

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;
    struct Point2D p2;

    p1.x = 10;    // p1의 멤버에만 값 저장
    p1.y = 20;    // p1의 멤버에만 값 저장

    ft_memcpy(&p2, &p1, sizeof(struct Point2D));    // Point2D 구조체 크기만큼 p1의 내용을 p2로 복사

    printf("%d %d\n", p2.x, p2.y);    // 10 20: p1의 내용을 p2로 복사했으므로 10 20

    return 0;
}