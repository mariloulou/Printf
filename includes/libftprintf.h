/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 18:23:06 by mcassar           #+#    #+#             */
/*   Updated: 2017/03/30 18:04:37 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H
# include "../libft/includes/libft.h"

char	*ft_whattodo(char *format);
char	*ft_whichflag(char *format);

int		ft_printf(const char *format, ...);


#endif
