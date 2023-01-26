/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:37:09 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/19 15:03:18 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main() {
  int	a;
  int	b;
  int	c;
  int	d;

  a = 4;
  b = 2;
  d = 0;
  c = 0 ;

  ft_div_mod(a, b, &c, &d);
    printf("%d \t %d \n",c ,d);
  return (0);
}*/
