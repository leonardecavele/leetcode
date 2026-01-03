/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_to_roman.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:22:45 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/07 15:44:33 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	v[7] = {1000, 500, 100, 50, 10, 5, 1};
static char	c[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};

char	*intToRoman(int num)
{
	char	*s;
	int		i, n, j;
	if (!(s = malloc(16)))
		return (0);
	i = n = j = s[15] = 0;

	while (num)
	{
		if (i > 0 && i < 6 && num / v[i + 1] == 9 && i % 2 != 0)
		{
			s[j++] = c[i + 1];
			s[j++] = c[i - 1];
            num -= 9 * v[++i];
            continue ;
		}
		if (i > 0 && num / v[i] == 4)
		{
			s[j++] = c[i];
			s[j++] = c[i - 1];
			num -= 4 * v[i];
			i++;
			continue ;
		}
		n = num / v[i];
		while (n--)
			s[j++] = c[i];
		num %= v[i++];
	}
	s[j] = 0;
	return (s);
}
