/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:25:38 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/31 12:25:41 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	num = 1;
	while (power != 0)
	{
		num = num * nb;
		power--;
	}
	return (num);
}
