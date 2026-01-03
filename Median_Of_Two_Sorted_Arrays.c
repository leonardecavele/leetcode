/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:14:16 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/13 17:33:53 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	findMedianSortedArrays(int *a, int asize, int *b, int bsize)
{
	int	a_i, b_i, cur, last;

	a_i = b_i = cur = last = 0;
	while (a_i + b_i <= (asize + bsize) / 2)
	{
		last = cur;
		if (a_i < asize && (b_i >= bsize || a[a_i] < b[b_i]))
			cur = a[a_i++];
		else
			cur = b[b_i++];
	}
	if ((asize + bsize) % 2)
		return (cur);
	else
		return ((last + cur) / 2.0);
}
