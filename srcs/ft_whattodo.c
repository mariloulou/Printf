/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whattodo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 19:20:32 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/02 23:57:20 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

char	*ft_whattodo(char *format, va_list list)
{
	ft_whichflag(format);
	if (t_v.flag[0] == 'C')
	{
		t_v.wc = va_arg(list, wchar_t);
		ft_printf_C();
	}
	else if (t_v.flag[0] == 's')
	{
		t_v.str = va_arg(list, char *);
		ft_printf_str();
	}
	else if (t_v.flag[0] == 'p')
	{
		t_v.jsp = va_arg(list, void *);
		ft_printf_address(t_v.jsp);
	}
	else if (t_v.flag[0] == 'x')
	{
		t_v.d = va_arg(list, int);
	}
	else if (t_v.flag[0] == 'd')
	{
		t_v.strd = va_arg(list, int);
		ft_printf_nbr();
	}
	return (0);
}
