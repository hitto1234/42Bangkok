/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:45:07 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/18 14:57:34 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*strb(char *box, int n)
{
	box[0] = '0' + ((n / 10) % 10);
	box[1] = '0' + (n % 10);
	return (box);
}

void	ft_print_comb2(void)
{
	char	box[2];
	int		frontval;
	int		backval;

	frontval = 0;
	while (frontval <= 99)
	{
		backval = frontval + 1;
		while (backval <= 99)
		{
			write(1, strb(box, frontval), 2);
			write(1, " ", 1);
			write(1, strb(box, backval), 2);
			if (frontval != 98 || backval != 99)
				write(1, ", ", 2);
			backval++;
		}
		frontval++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
