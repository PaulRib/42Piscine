/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:11:33 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/10 12:11:01 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	*c = "";
	*d = "abcde";

	test1 = ft_str_is_uppercase(*c);
	test2 = ft_str_is_uppercase(*d);

	printf("Resultat du test 1 : %d\nResultat du test 2 : %d\n", test1, test2);
}*/
