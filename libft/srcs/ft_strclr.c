/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:29:29 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:32:42 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}