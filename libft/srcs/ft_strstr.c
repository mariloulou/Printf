/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 08:28:25 by mcassar           #+#    #+#             */
/*   Updated: 2017/02/27 22:27:02 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int save;

	i = 0;
	save = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i])
	{
		j = i;
		save = 0;
		while (big[j] == little[save])
		{
			j++;
			save++;
			if (little[save] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
