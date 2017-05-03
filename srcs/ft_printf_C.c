/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_C.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 23:30:36 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/03 04:06:26 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int	whichmask(int size)
{
	if (size <= 7)
		return(0);
	if (size <= 11)
		return(1);
	if (size > 11 && size <= 16)
		return(2);
	else
		return(3);
}

static char	*fill_mask(int wt, char *bin)
{
	int i;
	int j;
	char **tab;
	char *mask;

	tab = (char**)malloc(sizeof(char**) * 4 + 1);
	tab[0] = "0xxxxxxx\0";
	tab[1] = "110xxxxx10xxxxxx\0";
	tab[2] = "1110xxxx10xxxxxx10xxxxxx\0";
	tab[3] = "11110xxx10xxxxxx10xxxxxx10xxxxxx\0";
	mask = ft_strdup(tab[wt]);
	i = (ft_strlen(bin) - 1);
	j = (ft_strlen(mask) - 1);
	while (i >= 0)
	{
		if (mask[j] == 'x')
		{
			mask[j] = bin[i];
			i--;
		}
		j--;
	}
	i = 0;
	while (mask[i])
	{
		if (mask[i] == 'x')
			mask[i] = '0';
		i++;
	}
	return(mask);
}

char **split_bytes(char *bytes, int nb)
{
	char **tab;
	int i;
	int j;
	int e;
	int b;

	i = 0;
	j = 0;
	e = 0;
	b = 0;
	tab = (char**)malloc(sizeof(char**) * (nb + 1) + 1);
	while (i <= (nb + 1))
	{
		tab[i] =(char*)malloc(sizeof(char*) * 8 + 1);
		while ( e < 8)
		{
			tab[i][j] = bytes[b];
			j++;
			b++;
			e++;
		}
		e = 0;
		j = 0;
		i++;
	}
	return(tab);
}

void	ft_printf_C(void)
{
	char *bin;
	int wt;
	
	bin = ft_itoa_base(t_v.wc, 2);
	wt = whichmask(ft_strlen(bin));
	bin = fill_mask(wt, bin);
	ft_bitoi(split_bytes(bin, wt), wt);
}
