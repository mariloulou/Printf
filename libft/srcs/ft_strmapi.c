/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:46:24 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:33:49 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_len(char const *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*strmapped;
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	strmapped = (char *)malloc(sizeof(char) * ft_len(s) + 1);
	if (strmapped == NULL)
		return (NULL);
	while (s[i])
	{
		strmapped[i] = f(j, s[i]);
		i++;
		j++;
	}
	strmapped[i] = '\0';
	return (strmapped);
}
