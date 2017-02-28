/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:13:55 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:30:04 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char *s_1;
	unsigned char *s_2;

	s_1 = (unsigned char*)s1;
	s_2 = (unsigned char*)s2;
	while (len > 0 && *s_1 == *s_2)
	{
		s_1++;
		s_2++;
		len--;
	}
	if (len == 0)
		return (0);
	else
		return (*s_1 - *s_2);
}
