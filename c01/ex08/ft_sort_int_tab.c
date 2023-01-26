/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:39:47 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/22 18:34:28 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
	i++;
	}
}

/*int	main(void)
{
	int a[] = {9,3,5,8,4};

	ft_sort_int_tab(a, 5);
	for (int kk=0; kk<5; kk++)
    	{
        printf("%d", a[kk]);
    	}
    	printf("\n\n");
}*/
