/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichflag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:22:16 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/04 05:52:51 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_whichflag_maj(char *format)
{
	if (format[1] == 'C')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "C";
	}
	if (format[1] == 'S')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "S";
	}
	if (format[1] == 'D')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "D";
	}
}

static void	ft_whichflag_min(char *format)
{
	if (format[1] == 'd' || format[1] == 'i')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "d";
	}
	else if (format[1] == 'p')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "p";
	}
	else if (format[1] == 's')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "s";
	}
	else if (format[1] == 'x')
	{
		t_v.flag = ft_strnew(2);
		t_v.flag = "x";
	}
}

/*
**	The ft_whichflag function is used to detect the flag to be treated
**	by ft_whattodo. It detecs which flag the ft_printf function stopped on,
**	writes it in t_v.flag, giving a clean outpout of the flag for
**	easy ft_whattodo use. The functions is divided into several sub-function,
**	for norm respect and easy access.
*/

void		ft_whichflag(char *format)
{
	if (format[1] >= 65 && format[1] <= 90)
		ft_whichflag_maj(format);
	else if (format[1] >= 97 && format[1] <= 122)
		ft_whichflag_min(format);
}
