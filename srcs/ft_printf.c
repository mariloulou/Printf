/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:56:21 by mcassar           #+#    #+#             */
/*   Updated: 2017/03/30 18:53:21 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/libftprintf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	int i = 0;
	char *flag;
	
	flag = (char *)format;
	while(format[i])
	{
		if (format[i] == '%')
		{
			ft_whattodo(flag + i);
		}
		i++;
	}
	return (0);
}
