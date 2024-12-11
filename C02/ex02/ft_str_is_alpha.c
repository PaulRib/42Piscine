/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:15:19 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/11 11:27:18 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char* c[99];
	char* d[99];

	int res;
	int res0;

	*c = "ju123";
	*d = "qqq";

	res = ft_str_is_alpha(*c);
	res0 = ft_str_is_alpha(*d);

	printf("Resultat test 1 : %d\n Resultat test 2 : %d\n", res, res0);
}*/	
