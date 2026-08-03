/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   container-with-most-water.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:37:00 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/27 10:00:41 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int maxArea(int *height, int heightSize)
{
	int	temp, max, i; 

	max = i = 0;
	heightSize--;
	while (i != heightSize)
	{
		temp = min(height[i], height[heightSize]) * (heightSize - i);
		if (temp > max)
			max = temp;
		if (height[i] < height[heightSize])
			i++;
		else
			heightSize--;
	}
	return (max);
}
