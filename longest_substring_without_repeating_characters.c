/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:09:59 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/13 17:05:10 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	lengthOfLongestSubstring(char *s)
{
	int		last[127] = {0};
	size_t	b, max, i = -1;

	b = max = 0;
	while (s[++i])
	{
		if (last[(int)s[i]] >= (int)b)
			b = last[(int)s[i]];
		last[(int)s[i]] = i + 1;
		if (i - b + 1 > max)
			max = i - b + 1;
	}
	return (max);
}
