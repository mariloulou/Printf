/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:59:04 by mcassar           #+#    #+#             */
/*   Updated: 2016/11/19 14:04:18 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len(char const *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*strmapped;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	strmapped = (char *)malloc(sizeof(char) * ft_len(s) + 1);
	if (strmapped == NULL)
		return (NULL);
	while (s[i])
	{
		strmapped[i] = f(s[i]);
		i++;
	}
	strmapped[i] = '\0';
	return (strmapped);
}
