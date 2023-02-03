/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:16:59 by twongjir          #+#    #+#             */
/*   Updated: 2023/02/02 13:24:26 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*j;
	int	rang;

	i = 0;
	rang = max - min;
	j = (int *) malloc(sizeof(*j) * rang);
	if (rang <= 0)
		return (NULL);
	while (min < max)
	{
		j[i] = min;
		min++;
		i++;
	}
	return (j);
}

/*#include <stdio.h>
int main(void)
{
	int min = -2;
	int max = 6;
	int *arr = ft_range(min,max);
	for(int j = 0; j< max - min;j++)
		printf("%d\n", arr[j]);
    return (0);
}*/
