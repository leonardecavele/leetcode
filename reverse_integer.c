/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 20:30:17 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/07 21:12:47 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_MAX 2147483647
#define INT_MIN -2147483648

int	reverse(int x)
{
	int	result = 0;
	int	digit;

	while (x)
	{
		digit = x % 10;
		x /= 10;
		if (result > (INT_MAX - digit) / 10 || result < (INT_MIN - digit) / 10)
			return (0);
		result = result * 10 + digit;
	}
	return (result);
}
