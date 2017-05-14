/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whattodo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 19:20:32 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/15 01:31:35 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_whattodo_maj_two(va_list list)
{
	if (t_v.flag[0] == 'O')
	{
		t_v.omaj = va_arg(list, int);
		ft_printf_o_maj();
	}
	else if (t_v.flag[0] == 'U')
	{
		t_v.umaj = va_arg(list, int);
		ft_printf_u_maj();
	}
	else if (t_v.flag[0] == 'X')
	{
		t_v.xmaj = va_arg(list, int);
		ft_printf_x_maj();
	}
	return ;
}

void	ft_whattodo_maj(va_list list)
{
	if (t_v.flag[0] == 'C')
	{
		t_v.cmaj = va_arg(list, wchar_t);
		ft_printf_c_maj();
	}
	else if (t_v.flag[0] == 'S')
	{
		t_v.smaj = va_arg(list, wchar_t *);
		ft_printf_s_maj();
	}
	else if (t_v.flag[0] == 'D')
	{
		t_v.dmaj = va_arg(list, int);
		ft_printf_d_maj();
	}
	ft_whattodo_maj_two(list);
}

void	ft_whattodo_min_two(va_list list)
{
	if (t_v.flag[0] == 'u')
	{
		t_v.u = va_arg(list, int);
		ft_printf_u();
	}
	else if (t_v.flag[0] == 'c')
	{
		t_v.c = va_arg(list, int);
		ft_printf_c();
	}
	else if (t_v.flag[0] == 'o')
	{
		t_v.o = va_arg(list, int);
		ft_printf_o();
	}
}

void	ft_whattodo_min(va_list list)
{
	if (t_v.flag[0] == 'd')
	{
		t_v.d = va_arg(list, int);
		ft_printf_d();
	}
	else if (t_v.flag[0] == 'p')
	{
		t_v.p = va_arg(list, void *);
		ft_printf_p();
	}
	else if (t_v.flag[0] == 's')
	{
		t_v.s = va_arg(list, char *);
		ft_printf_s();
	}
	else if (t_v.flag[0] == 'x')
	{
		t_v.x = va_arg(list, int);
		ft_printf_x();
	}
	ft_whattodo_min_two(list);
}

/*
**	ft_whattodo is a directing function, telling wich function should be used,
**	depending on the flag found and provided by ft_whichflag. It's divided in
**	sub-functions, for norm respect, and easy access.
*/

void	ft_whattodo(char *format, va_list list)
{
	ft_whichparam(format + 1);
	ft_whichflag(format);
	if (t_v.flag[0] >= 65 && t_v.flag[0] <= 90)
		ft_whattodo_maj(list);
	else if (t_v.flag[0] >= 97 && t_v.flag[0] <= 122)
		ft_whattodo_min(list);
}
