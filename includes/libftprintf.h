/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 18:23:06 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/04 05:50:41 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H
# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <stdio.h>

char	*ft_itoa_base(int nb, int base);

int		ft_printf(const char *format, ...);

void	ft_printf_c_maj(void);
void	ft_printf_d(void);
void	ft_printf_d_maj(void);
void	ft_printf_p(void);
void	ft_printf_s(void);
void	ft_printf_s_maj(void);
void	ft_printf_x(void);
void	ft_whattodo(char *format, va_list list);
void	ft_whichflag(char *format);

struct	s_v
{
	int d;
	int dmaj;
	int i;
	int x;
	char *flag;
	char *s;
	void *p;
	wchar_t cmaj;
	wchar_t *smaj;
}		t_v;

#endif
