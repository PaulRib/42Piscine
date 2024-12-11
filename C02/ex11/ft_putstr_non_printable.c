/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:29:27 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/26 23:09:50 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c >= 16)
	{
		to_hexa(c / 16);
		to_hexa(c % 16);
	}
	else
	{
		if (c != 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			to_hexa(j);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("C\rou\bc\vo\fu\ntu\tva\as \rbien ?");
}*/