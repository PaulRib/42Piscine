/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quclaque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:12:23 by quclaque          #+#    #+#             */
/*   Updated: 2024/09/14 12:43:47 by quclaque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_left_to_right(int grid[4][4], int row, int left)
{
	int	i;
	int	max_left;
	int	visible_left;

	max_left = 0;
	visible_left = 0;
	i = 0;
	while (i <= 3)
	{
		if (grid[row][i] > max_left)
		{
			max_left = grid[row][i];
			visible_left += 1;
		}
		i++;
	}
	if (visible_left != left)
		return (0);
	return (1);
}

int	check_row_right_to_left(int grid[4][4], int row, int right)
{
	int	i;
	int	max_right;
	int	visible_right;

	max_right = 0;
	visible_right = 0;
	i = 3;
	while (i >= 0)
	{
		if (grid[row][i] > max_right)
		{
			max_right = grid[row][i];
			visible_right += 1;
		}
		i--;
	}
	if (visible_right != right)
		return (0);
	return (1);
}

int	check_col_top_to_bot(int grid[4][4], int col, int top)
{
	int	i;
	int	max_top;
	int	visible_top;

	max_top = 0;
	visible_top = 0;
	i = 0;
	while (i <= 3)
	{
		if (grid[i][col] > max_top)
		{
			max_top = grid[i][col];
			visible_top += 1;
		}
		i++;
	}
	if (visible_top != top)
		return (0);
	return (1);
}

int	check_col_bot_to_top(int grid[4][4], int col, int bottom)
{
	int	i;
	int	max_bottom;
	int	visible_bottom;

	max_bottom = 0;
	visible_bottom = 0;
	i = 3;
	while (i >= 0)
	{
		if (grid[i][col] > max_bottom)
		{
			max_bottom = grid[i][col];
			visible_bottom += 1;
		}
		i--;
	}
	if (visible_bottom != bottom)
		return (0);
	return (1);
}

int	check_next_row_col(int col, int row, int type)
{
	if (type == 1)
	{
		if (col == 3)
			return (row + 1);
		else
			return (row);
	}
	else
	{
		if (col == 3)
			return (0);
		else
			return (col + 1);
	}
}
