/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:43:31 by username          #+#    #+#             */
/*   Updated: 2026/07/20 16:17:10 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	char_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	verif_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (str_len(base) < 2)
	{
		return (-1);
	}
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (-1);
		if (base[i] == '-' || base[i] == '+')
			return (-1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	signe;

	result = 0;
	i = 0;
	signe = 1;
	if (verif_base(base) == -1)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (char_index(str[i], base) != -1)
	{
		// result = result * 10 + (str[i] - '0');
		result = result * str_len(base) + char_index(str[i], base);
		i++;
	}
	return (signe * result);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi_base("123", "0123456789"));
// 	printf("%d", verif_base("0123456789"));
// }
