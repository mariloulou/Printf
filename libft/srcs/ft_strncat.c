/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:15:00 by mcassar           #+#    #+#             */
/*   Updated: 2016/11/19 14:04:50 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		buff1;
	size_t	buff2;

	buff1 = 0;
	while (s1[buff1] != '\0')
	{
		buff1++;
	}
	buff2 = 0;
	while (buff2 < n && s2[buff2])
	{
		s1[buff1] = s2[buff2];
		buff1++;
		buff2++;
	}
	s1[buff1] = '\0';
	return (s1);
}
