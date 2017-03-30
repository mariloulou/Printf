/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichflag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:22:16 by mcassar           #+#    #+#             */
/*   Updated: 2017/03/30 18:54:38 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_whichflag(char *format)
{
	char *flag;

	flag = NULL;
	if (format[1] == 's')
	{
		flag = (char *)malloc(sizeof(char) * 1 + 1);;
		flag = "s";
	}
	return(flag);
}
