/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichflag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:22:16 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/02 23:57:06 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_whichflag(char *format)
{
	if (format[1] == 'C')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "C";
	}
	else if (format[1] == 's')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "s";
	}
	else if (format[1] == 'p')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "p";
	}
	else if (format[1] == 'x')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "x";
	}
	else if (format[1] == 'd')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "d";
	}
}
