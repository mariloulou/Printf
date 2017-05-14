/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichflag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:22:16 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/15 01:30:22 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_whichflag_maj_two(char *format)
{
	if (format[1] == 'U')
		t_v.flag = ft_strdup("U");
	else if (format[1] == 'X')
		t_v.flag = ft_strdup("X");
	return ;
}

static void	ft_whichflag_maj(char *format)
{
	if (format[1] == 'C')
		t_v.flag = ft_strdup("C");
	else if (format[1] == 'S')
		t_v.flag = ft_strdup("S");
	else if (format[1] == 'D')
		t_v.flag = ft_strdup("D");
	else if (format[1] == 'O')
		t_v.flag = ft_strdup("O");
	ft_whichflag_maj_two(format);
}

static void	ft_whichflag_min_two(char *format)
{
	if (format[1] == 'o')
		t_v.flag = ft_strdup("o");
	else if (format[1] == 'c')
		t_v.flag = ft_strdup("c");
	else if (format[1] == 'u')
		t_v.flag = ft_strdup("u");
}

static void	ft_whichflag_min(char *format)
{
	if (format[1] == 'd' || format[1] == 'i')
		t_v.flag = ft_strdup("d");
	else if (format[1] == 'p')
		t_v.flag = ft_strdup("p");
	else if (format[1] == 's')
		t_v.flag = ft_strdup("s");
	else if (format[1] == 'x')
		t_v.flag = ft_strdup("x");
	ft_whichflag_min_two(format);
}

/*
**	The ft_whichflag function is used to detect the flag to be treated
**	by ft_whattodo. It detects which flag the ft_printf function stopped on,
**	writes it in t_v.flag, giving a clean outpout of the flag for
**	easy ft_whattodo use. The functions is divided into several sub-function,
**	for norm respect and easy access.
*/

void		ft_whichflag(char *format)
{
	format = format + ft_strlen(t_v.params);
	if (format[1] >= 65 && format[1] <= 90)
		ft_whichflag_maj(format);
	else if (format[1] >= 97 && format[1] <= 122)
		ft_whichflag_min(format);
}
