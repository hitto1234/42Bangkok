/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:16:19 by twongjir          #+#    #+#             */
/*   Updated: 2023/02/02 12:33:00 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	strlen2(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	unsigned int	len;
	char			*dup;
	int				i;

	len = strlen2(src) + 1;
	dup = (char *)malloc(sizeof(*src) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "a";
	char *s2 = strdup(s1);
	char *s3 = ft_strdup(s1);
	char s4[] = "b";
	char s5[] = "c!";
	char *s6 = strdup(s4);
	char *s7 = ft_strdup(s4);
	char *s8 = strdup(s5);
	char *s9 = ft_strdup(s5);
	printf("%p\n", s2);
	printf("%p\n", s3);
	printf("%p\n", s6);
	printf("%p\n", s7);
	printf("%p\n", s8);
	printf("%p\n", s9);

    return (0);
}*/
