/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:24:38 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/31 12:24:46 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		num = 1;
		while (nb >= 1)
		{
			num = num * nb;
			nb--;
		}
	}
	return (num);
}
