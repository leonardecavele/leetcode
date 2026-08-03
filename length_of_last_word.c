/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length-of-last-word.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:50:35 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/19 16:14:18 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>

int	lengthOfLastWord(char *s)
{
   size_t	i = -1;
   size_t	count = 0;
   bool		in = 0;

   while (s[++i])
   {
	   if (s[i] != ' ')
	   {
		   if (!in)
			   count = 0;
		   in = 1;
		   count++;
	   }
	   else
		   in = 0;
   }
   return (count);
}
