/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:30:17 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/03 04:28:14 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/libftprintf.h"
#include <stdio.h>
#include <locale.h>

int	main(void)
{
	char *locale;
	int i = 123;

	setlocale(LC_ALL, "");
	ft_printf("%C", 56000);
	printf("\n------\n");
	printf("%C", 56000);
	return (0);
}
