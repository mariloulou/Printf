/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:30:17 by mcassar           #+#    #+#             */
/*   Updated: 2017/03/29 19:42:13 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	char *str = "Bonjour";
	ft_printf("%s", str);
	printf("\n------\n");
	printf("%s", str);
	return (0);
}
