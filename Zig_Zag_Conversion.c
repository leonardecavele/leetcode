/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zigzag-conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:07:35 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/27 10:24:36 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *convert(char *s, int numRows)
{
	char	*res = malloc(strlen(s) + 1);
	int		cycle = 2 * numRows - 2;
	int		i = -1;
    
	while (s[++i])
	{
		*res++ = s[i];
	}
}
