/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:13:38 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/22 18:11:51 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	box1;

	box1 = *a;
	*a = *a / *b;
	*b = box1 % *b;
}

/*int main() {
  int  a;
  int  b;

  a = 6;
  b = 3;
  ft_ultimate_div_mod(&a,&b);
  printf("%d \t %d \n", a , b);
  return 0;
}*/
