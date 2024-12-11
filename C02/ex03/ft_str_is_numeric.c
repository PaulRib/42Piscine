/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:49:24 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/10 13:57:02 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9' )
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
	int test1;
	int test2;

	*c = "987456";
	*d = "ABCZE";
	test1 = ft_str_is_numeric(*c);
	test2 = ft_str_is_numeric(*d);

	printf("Resultat du test 1 : %d\nResultat du test 2 : %d\n", test1, test2);
}*/
