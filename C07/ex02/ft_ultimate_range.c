/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:18:45 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/24 16:21:45 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (i < (max - min))
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int *range;
	int length;
	length = ft_ultimate_range(&range, 13, 11);

	printf("Length: %d\n", length);
}*/