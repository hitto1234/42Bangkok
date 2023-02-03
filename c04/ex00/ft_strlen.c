/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:05:04 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/29 19:05:36 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main(void) 
{
  char*  str_word;
  int   a;  
  str_word = "Good bye";
  a = ft_strlen(str_word);
  a = a + '0';
  write(1, &a, 1);
  return 0;
}*/
