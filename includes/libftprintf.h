/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 18:23:06 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/03 03:58:25 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H
# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <stdio.h>

char	*ft_whattodo(char *format, va_list list);
char	*ft_itoa_base(int nb, int base);

int		ft_printf(const char *format, ...);

void	ft_bitoi(char **tab, int nb);
void	ft_printf_str();
void	ft_whichflag(char *format);
void	ft_printf_address(void *nb);
void	ft_printf_C(void);
void	ft_printf_nbr(void);

struct	s_v
{
	int i;
	int l;
	int	d;
	char *str;
	char *flag;
	void *jsp;
	wchar_t wc;
	int strd;
}		t_v;

#endif
