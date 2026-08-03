/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAtoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:46:50 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/07 16:52:25 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

int myAtoi(char *s)
{
 	long	result = 0;
	size_t	i = 0;
	char	sign = 1;

	while ((s[i] >= '\t' && s[i] <= '\r') || s[i] == ' ')
		i++;
	if (s[i] == '-')
		sign = -1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while ((unsigned char)s[i] - '0' < 10)
	{
		result = result * 10 + (s[i++] - '0');
		if (result > (long)INT_MAX)
			return (sign == 1 ? INT_MAX : INT_MIN);
	}
	return (result * sign);
}
