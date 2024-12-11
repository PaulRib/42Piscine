/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:34:13 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/08 16:09:11 by nmagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
/*	i --> y */
	while (i++ < y)
	{
		j = 0;
/*		j --> x */
		while (j++ < x)
		{
			if ((j == 1 || j == x) && (i == 1 || i == y))
				ft_putchar('o');
			else if (j == 1 || j == x)
				ft_putchar ('|');
			else if (i == y || i == 1)
				ft_putchar ('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
