/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whattodo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 19:20:32 by mcassar           #+#    #+#             */
/*   Updated: 2017/03/30 18:55:03 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libftprintf.h"

char *ft_whattodo(char *format)
{
	char *flag;

	flag = ft_whichflag(format);
	printf("FLAG DETECTED ===> %s", flag);
	if (flag[0] == 's')
	{

	}
	return(0);
}
