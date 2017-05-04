/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:56:21 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/04 04:27:21 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
** ft_printf is my version for the stdio.h library printf. It should behave
** just like the stdio.h original printf function, exept on some minor points.
** This version of printf was made to suit my own needs. Even though all the
** existing flags of the original printf function are respected, new flags has
** been added in my version. This is the main function of this program.
*/

int	ft_printf(const char *format, ...)
{
	va_list list;

	t_v.i = 0;
	va_start(list, format);
	t_v.flag = (char *)format;
	while (format[t_v.i])
	{
		if (format[t_v.i] == '%')
			ft_whattodo(t_v.flag + t_v.i, list);
		t_v.i++;
	}
	return (0);
}
