/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quclaque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:52:41 by quclaque          #+#    #+#             */
/*   Updated: 2024/09/15 20:28:11 by quclaque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check_next_row_col(int col, int row, int type);
int	check_row_left_to_right(int grid[4][4], int row, int left);
int	check_row_right_to_left(int grid[4][4], int row, int right);
int	check_col_top_to_bot(int grid[4][4], int col, int top);
int	check_col_bot_to_top(int grid[4][4], int col, int bottom);
int	*view_malloc(char **argv);
int	check_error(char **argv);

int	check_sol(int grid[4][4], int col, int row, int views[16])
{
	if (col == 3)
	{
		if (!check_row_left_to_right(grid, row, views[row + 8])
			|| !check_row_right_to_left(grid, row, views[row + 12]))
			return (0);
	}
	if (row == 3)
	{
		if (!check_col_top_to_bot(grid, col, views[col])
			|| !check_col_bot_to_top(grid, col, views[col + 4]))
			return (0);
	}
	return (1);
}

void	show_grid(int grid[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	is_valid(int grid[4][4], int row, int col, int number)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == number || grid[i][col] == number)
			return (0);
		i++;
	}
	return (1);
}

int	solve_grid(int grid[4][4], int row, int col, int views[16])
{
	int	number;
	int	next_row;
	int	next_col;

	if (row == 4)
	{
		show_grid(grid);
		return (1);
	}
	next_row = check_next_row_col(col, row, 1);
	next_col = check_next_row_col(col, row, 0);
	number = 1;
	while (number <= 4)
	{
		if (is_valid(grid, row, col, number))
		{
			grid[row][col] = number;
			if (check_sol(grid, col, row, views))
				if (solve_grid(grid, next_row, next_col, views))
					return (1);
		}
		number++;
	}	
	grid[row][col] = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	grid[4][4];
	int	*views;

	if (argc != 2 || !check_error(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	views = view_malloc(argv);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	if (!solve_grid(grid, 0, 0, views))
		write (1, "Error\n", 6);
}
