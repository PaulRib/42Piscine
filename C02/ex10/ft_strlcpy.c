/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:05:34 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/26 23:13:46 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	taille;

	i = 0;
	taille = 0;
	while (src[taille] != '\0')
		taille++;
	if (size <= 0)
		return (taille);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (taille);
}
/*
#include <stdio.h>
int	main()
{
	char src[] = "Je suis la source";
	char dest[99];
	unsigned int size = 10;
	printf("%d", ft_strlcpy(dest, src, size));
}*/