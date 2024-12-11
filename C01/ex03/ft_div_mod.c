/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:04:49 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/09 12:46:00 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int *div;
	int *mod;
	int a;
	int b;

	a = 14;
	b = 3;
	div = &a;
	mod = &b;
	printf("Valeur de div : %d\n", *div);
	printf("Valeur de mod : %d\n", *mod);
	ft_div_mod(a, b, div, mod);
	printf("Valeur de div apres : %d\n", *div);
	printf("Valeur de mod apres : %d\n", *mod);
}*/
