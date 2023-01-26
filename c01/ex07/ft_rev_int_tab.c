/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:33:46 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/19 15:23:57 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	temp = 0;
	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*int main() {
  int  box[] = {1,2,3,4,5};
  int  size_num;
  int  i;
  
  size_num = 5;
  ft_rev_int_tab(box, size_num);
  //printf("%d \t",box[0]);
  //printf("%d \t",box[1]);
  //printf("%d \t",box[2]);
  i = 0;
  while (i < size_num)
    {
      printf("%d \t",box[i]);
      i++;
    }
    
    return 0;
}*/
