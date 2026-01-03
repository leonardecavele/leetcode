/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b-shortest-path.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:29:08 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/13 02:56:43 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	paths[8][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};

int	shortestPathBinaryMatrix(int **grid, int gridSize, int *gridColSize)
{
	int q[gridSize * (*gridColSize)][2];
	int front, i, x, y, back = 1;

	front = q[0][0] = q[0][1] = 0; 
	if (grid[0][0] || grid[gridSize - 1][*gridColSize - 1])
		return (-1);
	grid[0][0] = 1;
	while (front < back)
	{
		if (q[front][0] == gridSize - 1 && q[front][1] == *gridColSize - 1)
			return (grid[q[front][0]][q[front][1]]);
		i = -1;
		while (++i < 8)
		{
			x = q[front][0] + paths[i][0];
			y = q[front][1] + paths[i][1];
			if (x >= 0 && x < gridSize && y < *gridColSize && y >= 0 && !grid[x][y])
			{
				grid[x][y] = grid[q[front][0]][q[front][1]] + 1;
				q[back][0] = x;
				q[back++][1] = y;
			}
		}
		front++;
	}
	return (-1);
}
