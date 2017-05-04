/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:30:17 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/05 01:13:15 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/libftprintf.h"
#include <stdio.h>
#include <locale.h>

int	main(void)
{
	char *locale;
	char *test;
	int d = 2147483649;
	int dmaj = 2147483649;
	int i = 123456789;
	char *s = "Salutations.";
	wchar_t cmaj = 945;
	wchar_t *smaj = L"안녕하세요";

	test = "D";
	setlocale(LC_ALL, "");
	if (strcmp(test, "d") == 0)
	{
		ft_printf("%d", d);
		printf("\n------\n%d", d);
	}
	else if (strcmp(test, "D") == 0)
	{
		ft_printf("%D", dmaj);
		printf("\n------\n%D", dmaj);
	}
	else if (strcmp(test, "i") == 0)
	{
		ft_printf("%i", i);
		printf("\n------\n%i", i);
	}
	else if (strcmp(test, "x") == 0)
	{
		ft_printf("%x", d);
		printf("\n------\n%x", d);
	}
	else if (strcmp(test, "s") == 0)
	{
		ft_printf("%s", s);
		printf("\n------\n%s", s);
	}
	else if (strcmp(test, "p") == 0)
	{
		ft_printf("%p", &s);
		printf("\n------\n%p", &s);
	}
	else if (strcmp(test, "C") == 0)
	{
		ft_printf("%C", cmaj);
		printf("\n------\n%C", cmaj);
	}
	else if (strcmp(test, "S") == 0)
	{
		ft_printf("%S", smaj);
		printf("\n------\n%S", smaj);
	}
	return (0);
}
