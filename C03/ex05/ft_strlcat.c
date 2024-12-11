/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:24:01 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/22 23:35:34 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_taille;
	unsigned int	dest_taille;

	i = 0;
	dest_taille = 0;
	src_taille = 0;
	while (*dest != '\0' && dest_taille < size)
	{
		dest_taille++;
		dest++;
	}
	while (src[src_taille] != '\0')
		src_taille++;
	if (size <= dest_taille || size <= 0)
		return (src_taille + size);
	while (src[i] != '\0' && dest_taille + i + 1 < size)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest_taille + src_taille);
}

/*#include <stdio.h>

int	main()
{
	char src[] = "bbbb";
	char dest[] = "aaaaaaaaaaaa";
	unsigned int size;

	size = 14;
	printf("%d", ft_strlcat(dest, src, size));
}*/
