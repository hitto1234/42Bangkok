/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wduangto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:56:02 by wduangto          #+#    #+#             */
/*   Updated: 2023/01/18 20:19:50 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	comb(int i, int j, char digit[], int k)
{
	i--;
	while (j <= 9)
	{
		digit[k - i - 1] = j + '0';
		if (i > 0)
		{
			comb(i, j + 1, digit, k);
		}
		else
		{
			write(1, digit, k);
			write(1, ", ", 2);
		}
		j++;
	}
}

void	ft_print_combn(int n)
{
	char	digit[9];

	comb(n, 0, digit, n);
}

/*int	main(void)
{
	ft_print_combn(9);
}*/
