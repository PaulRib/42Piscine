/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:22:31 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/10 13:55:08 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char c[] = {23};
	char d[] = {37};
	int test1;
	int test2;

	test1 = ft_str_is_printable(c);
	test2 = ft_str_is_printable(d);
	printf("Resultat du test 1 : %d\nResultat du test 2 : %d\n", test1, test2);
}*/	
