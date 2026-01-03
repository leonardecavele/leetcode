/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regular-expression-matching.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:56:00 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/19 01:00:17 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	isMatch(char *s, char *p)
{
	if (!*p)
		return (*s == 0);
	if (*(p + 1) == '*')
		return (isMatch(s, p + 2)
				|| (*s && (*s == *p || *p == '.') && isMatch(s + 1, p)));
	if (*s && (*s == *p || *p == '.'))
		return (isMatch(s + 1, p + 1));
	return (0);
}
