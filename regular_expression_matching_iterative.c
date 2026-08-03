/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:36:00 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/13 18:18:03 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>

bool	isMatch(char *s, char *p)
{
	size_t	s_i, p_i, offset;

	s_i = p_i = offset = 0;
	while (s[s_i])
	{
		if (p[p_i])
		{
			if (p[p_i] == s[s_i] || p[p_i] == '.')
				p_i++;
			else if (p[p_i + 1] == '*')
				p_i += 2;
			else if (!(p[p_i] == '*' && p_i && (p[p_i - 1] == s[s_i] || p[p_i - 1] == '.')))
				return (0);
		}
		if (p[p_i] == '*')
			offset++;
		s_i++;
	}
	return (p_i + offset >= s_i);
}

int	main(int ac, char **av)
{
	(void)ac;
	__builtin_printf("%d\n", isMatch(av[1], av[2]));
}
