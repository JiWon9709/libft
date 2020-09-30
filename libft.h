/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyou <jyou@student.42.kr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 20:11:26 by jyou              #+#    #+#             */
/*   Updated: 2020/09/30 20:11:26 by jyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H
#define __LIBFT_H

void    *ft_memset(void *ptr, int value, size_t num);
void    ft_bzero(void *ptr, size_t size);
void    *memcpy(void *dest, const void *ptr, size_t num);
int     ft_tolower(int c);
int     ft_toupper(int c);

#endif