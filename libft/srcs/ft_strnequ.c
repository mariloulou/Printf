/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:55:30 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:27:54 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t u_i;

	if (!s1 || !s2)
		return (0);
	u_i = 0;
	while (s1[u_i] == s2[u_i] && s1[u_i] && u_i < n)
		u_i++;
	if (u_i >= n)
		u_i--;
	if (s1[u_i] != s2[u_i])
		return (0);
	return (1);
}
