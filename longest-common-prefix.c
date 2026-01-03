/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest-common-prefix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:24:21 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/08 14:46:02 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] && s1[i] == s2[i])
		i++;
	return (i);
}

int	ft_strlen(char *s)
{
	int	i = 0;

	while (s[i])
		i++;
	return (i);
}

char	*longestCommonPrefix(char **strs, int strsSize)
{
	int		i = 0;
	int		curr;
	int		min = 0;
	char	*result;

	if (strsSize == 1)
		min = ft_strlen(strs[0]);
	while (++i < strsSize)
	{
		curr = size_strcmp(strs[i - 1], strs[i]);
		if (i == 1)
			min = curr;
		if (curr < min)
			min = curr;
	}
	result = malloc(min + 1);
	if (!result)
		return (0);
	i = -1;
	while (++i < min)
		result[i] = (*strs)[i];
	result[i] = 0;
	return (result);
}
