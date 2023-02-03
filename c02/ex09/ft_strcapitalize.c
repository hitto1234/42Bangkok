/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twongjir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:00:11 by twongjir          #+#    #+#             */
/*   Updated: 2023/01/27 14:49:07 by twongjir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_alpha_numeric(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

char	ft_charupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

char	ft_charlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (is_char_alpha_numeric(str[i]) && flag == 0)
		{
			str[i] = ft_charupcase(str[i]);
			flag = 1;
		}
		else if (is_char_alpha_numeric(str[i]) && flag == 1)
				str[i] = ft_charlowcase(str[i]);
		else if (flag == 1)
			flag = 0;
		i++;
	}
	return (str);
}
