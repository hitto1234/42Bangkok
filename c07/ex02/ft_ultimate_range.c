/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:17:40 by twongjir          #+#    #+#             */
/*   Updated: 2023/02/02 19:17:56 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (!*range)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

/*#include <stdio.h>
int main(void)
{
	int min = 3;
	int max = 10;
	int *range = NULL;
    
	int	size = ft_ultimate_range(&range, min, max);
	for (int i = 0; i < size; i++)
		printf("%d, ", range[i]);
	printf("\n");
	printf("%d ", size);
}*/
