/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:37:37 by mcassar           #+#    #+#             */
/*   Updated: 2016/11/19 14:12:34 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s_src;
	char *s_dst;

	s_src = (char*)src;
	s_dst = (char*)dst;
	if (s_src < s_dst)
	{
		s_src = s_src + len - 1;
		s_dst = s_dst + len - 1;
		while (len > 0)
		{
			*s_dst-- = *s_src--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*s_dst++ = *s_src++;
			len--;
		}
	}
	return (dst);
}
