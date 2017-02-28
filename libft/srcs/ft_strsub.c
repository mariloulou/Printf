/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:08:55 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:26:36 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*strfind;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	strfind = (char *)malloc(sizeof(*strfind) * (len + 1));
	if (strfind == NULL)
		return (NULL);
	while (i < len)
	{
		strfind[i] = s[start];
		i++;
		start++;
	}
	strfind[i] = '\0';
	return (strfind);
}
