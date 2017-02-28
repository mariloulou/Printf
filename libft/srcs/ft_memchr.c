/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:50:09 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:29:47 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*u_str;
	size_t			u_index;

	u_str = (unsigned char *)s;
	u_index = 0;
	while (u_index < n)
	{
		if (u_str[u_index] == (unsigned char)c)
			return ((u_str + u_index));
		u_index++;
	}
	return (NULL);
}
