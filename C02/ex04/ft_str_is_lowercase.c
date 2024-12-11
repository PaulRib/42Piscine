/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:06:04 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/10 13:56:24 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char *c[99];
	char *d[99];
	int test1;
	int test2;

	*c = "azerty";
	*d = "9317";
	test1 = ft_str_is_lowercase(*c);
	test2 = ft_str_is_lowercase(*d);

	printf("Resultat du test 1 : %d\nResultat du test 2 : %d\n", test1, test2);
}*/
