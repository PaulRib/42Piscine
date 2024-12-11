/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:38:05 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/19 18:35:05 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *argv[])
{
	int	i;

	i = 0;
	(void)ac;
	while (argv[0][i])
	{	
		write(1, &argv[0][i++], 1);
	}
	write (1, "\n", 1);
}