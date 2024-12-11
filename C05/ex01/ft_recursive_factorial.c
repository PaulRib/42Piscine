/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:10:24 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/20 19:32:15 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (f);
	f *= ft_recursive_factorial(nb -1) * nb;
	return (f);
}

/*int main()
{
    printf("%d",ft_recursive_factorial(5));
}*