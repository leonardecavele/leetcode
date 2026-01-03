/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   candy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:24:26 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/19 18:41:42 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int candy(int *ratings, int ratingsSize)
{
    int i, up, down, best, candies = 1;

    i = up = down = best = 0;
	while (++i < ratingsSize)
        if (ratings[i] > ratings[i - 1])
        {
            down = 0;
            best = ++up;
            candies += 1 + up;
        }
        else if (ratings[i] == ratings[i - 1])
        {
            up = down = best = 0;
            candies += 1;
        }
        else
        {
            up = 0;
            down++;
            candies += 1 + down - (best >= down ? 1 : 0);
        }
    return (candies);
}
