/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roman_to_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:40:00 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/07 14:19:14 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	value(char c)
{
	if (c == 'I') return (1);
	if (c == 'V') return (5);
	if (c == 'X') return (10);
	if (c == 'L') return (50);
	if (c == 'C') return (100);
	if (c == 'D') return (500);
	if (c == 'M') return (1000);
	return (0);
}

int	romanToInt(char *s)
{
	int	result, val, previous, i;
	result = val = previous = i = 0;

	while (s[i]) i++;
	while (--i >= 0)
	{
		val = value(s[i]);
		if (val < previous && previous <= val * 10 &&
			(s[i] == 'I' || s[i] == 'X' || s[i] == 'C'))
			result -= val;
		else
			result += val;
		previous = val;
	}
	return (result);
}
