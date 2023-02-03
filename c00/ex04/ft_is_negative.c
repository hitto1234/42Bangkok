/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:29:58 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/18 20:11:53 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	index;

	if (n < 0)
		index = 'N';
	else
		index = 'P';
	write(1, &index, 1);
}

/*int	main(void)
{
	ft_is_negative(0);
	return (0);
}*/
