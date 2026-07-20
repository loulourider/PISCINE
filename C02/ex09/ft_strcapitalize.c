/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 00:46:07 by username          #+#    #+#             */
/*   Updated: 2026/07/14 02:01:45 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	cn(char c)
{
	int	is_alpha;
	int	is_digit;

	is_alpha = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	is_digit = (c >= '0' && c <= '9');
	if (!((is_alpha == 1) || (is_digit == 1)))
	{
		return (0);
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (cn(str[i - 1]) == 0))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	bla[] = "hi, How aRe you? 42words forty-two; fifty+and+one";

	printf("%s", ft_strcapitalize(bla));
}
