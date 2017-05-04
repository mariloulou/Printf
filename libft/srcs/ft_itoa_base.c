/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 23:50:47 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/03 23:51:17 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	malloc_size(int nb, int base)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nb, int base)
{
	int		index;
	char	*hex;
	char	*result;
	char	*ret;
	int		i;
	int		j;
	int		ms;

	hex = "0123456789abcdef";
	ms = malloc_size(nb, base);
	i = 0;
	j = 0;
	result = (char*)malloc(sizeof(char*) * ms + 1);
	ret = (char*)malloc(sizeof(char*) * ms + 1);
	while (nb > 0)
	{
		index = nb % base;
		result[i] = hex[index];
		i++;
		nb = nb / base;
	}
	i--;
	while (i >= 0)
	{
		ret[j] = (result[i]);
		j++;
		i--;
	}
	ret[j] = '\0';
	return(ret);
}
