/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:16:41 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:29:31 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;
	size_t	u_i;
	char	*str2;

	u_i = 0;
	str = (void *)malloc(sizeof(*str) * (size));
	if (str == NULL)
		return (NULL);
	str2 = (char *)str;
	while (u_i < size)
	{
		str2[u_i] = 0;
		u_i++;
	}
	return (str);
}
