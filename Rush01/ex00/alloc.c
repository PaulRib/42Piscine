/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quclaque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:16:10 by quclaque          #+#    #+#             */
/*   Updated: 2024/09/15 20:21:43 by quclaque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_error(char **argv)
{
	int	i;

	i = -1;
	while (argv[1][++i])
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9') || i > 31)
			return (0);
		if (argv[1][i + 1] && argv[1][i + 1] != ' ')
			return (0);
		if (argv[1][i + 1] == ' ')
			i++;
	}
	if (argv[1][i - 1] == ' ')
		return (0);
	return (1);
}

int	*view_malloc(char **argv)
{
	int	i;
	int	j;
	int	*views;

	views = (int *)malloc(sizeof(int) * 16);
	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != ' ')
		{
			views[j] = argv[1][i] - '0';
			j++;
			i++;
		}
		if (argv[1][i] == ' ')
			i++;
	}
	return (views);
}
