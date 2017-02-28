/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:02:47 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:28:21 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		save;

	i = 0;
	save = ft_strlen(dst);
	if (src[i] == '\0')
		return (size);
	while (dst[i])
		i++;
	if (i >= size)
		return (size + ft_strlen(src));
	j = 0;
	while (i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dst > 0)
		return (save + ft_strlen(src));
	return (0);
}
