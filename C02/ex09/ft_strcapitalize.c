/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:42:24 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/26 23:14:45 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	maj;

	maj = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (maj == 1 && str[i] >= 'a' && str[i] <= 'z')
		{	
			maj = 0;
			str[i] -= 32;
		}
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
			maj = 1;
		if (str[i] >= '0' && str[i] <= '9')
			maj = 0;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux, cinquante+et+un";
	printf("%s", ft_strcapitalize(str));	
}*/