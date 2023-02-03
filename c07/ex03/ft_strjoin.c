/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:18:08 by twongjir          #+#    #+#             */
/*   Updated: 2023/02/02 19:11:02 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	i;

	i = 0;
	final_length = 0;
	while (i < size)
	{
		final_length += ft_str_length(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		full_length;
	char	*string;
	char	*d;

	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	d = string;
	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_str_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_str_length(sep);
		}
		i++;
	}
	*d = '\0';
	return (string);
}

/*int main(void)
{
    int size = 3;
    char **strs = (char **)malloc(size * sizeof(char *));
    strs[0] = (char *)malloc(sizeof(char) * 6 + 1);
    strs[1] = (char *)malloc(sizeof(char) * 8 + 1);
    strs[2] = (char *)malloc(sizeof(char) * 17 + 1);
    strs[0] = "Hello!";
    strs[1] = "Luke";
    strs[2] = "Skywalker";
    char *separator = " ";
    char *result = ft_strjoin(size, strs, separator);
    printf("%s\n", result);
    free(result);
}*/
