/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:26:16 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/29 21:27:40 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = "Abbbb";
	str2 = "bCaBa";
	result = 0;
	result = ft_strncmp(str1, str2, 3);
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
	return (0);
}*/
