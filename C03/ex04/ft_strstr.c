/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:32:05 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/23 13:34:42 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main()
{
	char a[] = "Je suis l'aiguille dans la botte de foin";
	char b[] = "botte";

	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", strstr(a, b));
}*/
