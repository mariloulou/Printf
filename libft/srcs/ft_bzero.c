/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:47:04 by mcassar           #+#    #+#             */
/*   Updated: 2016/11/14 09:56:31 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(char *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
}
