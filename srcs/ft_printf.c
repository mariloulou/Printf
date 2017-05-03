/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:56:21 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/01 04:49:14 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list list;

	t_v.i = 0;
	t_v.l = 0;
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
