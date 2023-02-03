/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:27:40 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/29 16:06:37 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void) 
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, World!";
    int result;

    result = ft_strcmp(str1, str2);
    if (result == 0) 
	{
        printf("The strings are identical.\n");
    } 
	else if (result > 0) 
	{
        printf("str1 is lexicographically greater than str2.\n");
    } 
	else 
	{
        printf("str1 is lexicographically less than str2.\n");
    }
    return 0;
}*/
