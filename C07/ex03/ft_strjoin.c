/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:43:48 by pribolzi          #+#    #+#             */
/*   Updated: 2024/09/24 18:03:29 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*result;

	total_len = 0;
	if (size == 0)
	{
		result = (char *)malloc(1);
		result[0] = '\0';
		return (result);
	}
	i = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += (ft_strlen(sep) * (size - 1));
	result = malloc(sizeof(char) * (total_len + 1));
	result[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}

/*#include <stdio.h>
int	main()
{
	char *strs[] = {"test1", "test2", "test3", "test4"};
	char sep[] = ", ";
	int size;
	char *result;
	size = 8;
	result = ft_strjoin(size, strs, sep);
	printf("%s", result);
	free(result);
}*/
