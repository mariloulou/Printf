/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:55:01 by mcassar           #+#    #+#             */
/*   Updated: 2017/04/24 01:34:09 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int	malloc_size(unsigned long int nb)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

static int	ft_printf_hexa(unsigned long int nb)
{
	int		index;
	char	*hex;
	char	*result;
	int		i;
	int		ms;

	hex = "0123456789abcdef";
	ms = malloc_size(nb);
	i = 0;
	result = (char*)malloc(sizeof(char*) * ms + 1);
	while (nb > 0)
	{
		index = nb % 16;
		result[i] = hex[index];
		i++;
		nb = nb / 16;
	}
	while (i >= 0)
	{
		ft_putchar(result[i]);
		i--;
	}
	return (0);
}

void	ft_printf_address(void *nb)
{
	ft_putstr("0x");
	ft_printf_hexa((unsigned long int) nb);
	return ;
}


