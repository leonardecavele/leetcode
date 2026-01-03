/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove-duplicate-sorted-array.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:48:32 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/26 21:21:29 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	removeDuplicates(int *nums, int numsSize)
{
	int	i = -1;
	int	k = 0;

	if (!numsSize)
		return (0);
	while (++i < numsSize)
		if (nums[i] != nums[k])
			nums[++k] = nums[i];
	return (k + 1);
}
