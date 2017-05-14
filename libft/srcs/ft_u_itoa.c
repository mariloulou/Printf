/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 23:22:47 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/14 23:46:13 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

static int		mallocsize(long int nb, int base)
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

static char		*ft_invert(char *str, unsigned int nb, int base)
{
	char	*ret;
	int		i;
	int		j;
	int		ms;

	ms = mallocsize(nb, base);
	ret = (char*)malloc(sizeof(char*) * ms + 1);
	i = 0;
	j = ms - 1;
	while (i <= ms)
	{
		ret[i] = str[j];
		i++;
		j--;
	}
	free(str);
	ret[i] = '\0';
	return (ret);
}

char			*ft_u_itoa(int nbr, int base)
{
	char			*ret;
	char			*chart;
	int				index;
	int				i;
	unsigned int	nb;

	if (nbr == 0)
		return ("0");
	nb = nbr;
	ret = (char*)malloc(sizeof(char*) * mallocsize(nb, base));
	chart = "0123456789abcdef";
	i = 0;
	while (nb > 0)
	{
		index = nb % base;
		ret[i] = chart[index];
		nb = nb / base;
		i++;
	}
	ret = ft_invert(ret, nbr, base);
	return (ret);
}
