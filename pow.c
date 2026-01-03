/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:19:54 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/19 15:47:54 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

double	myPow(double x, int n)
{
	long	nb = n;
	double	half;

	if (nb == 0)
		return (1);
	if (nb < 0)
	 {
		nb = -nb;
		x = 1 / x;
	}
	half = myPow(x, nb / 2);
	if (!(n % 2))
		return (half * half);
	return (half * half * x);
}

#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;
	__builtin_printf("%f\n", myPow(atoi(av[1]), atoi(av[2])));
}
