/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_convert_base2.c                                :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/20 13:41:25 by username         #+#    #+#              */
/*   Updated: 2026/07/21 15:40:25 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	verif_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_len(base) < 2)
		return (-1);
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (-1);
		if (base[i] == '+' || base[i] == '-')
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

long	nb_len(long nb, int base_len)
{
	long	len;

	len = 1;
	while (nb >= base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
}

long	ft_atoi_base(char *nbr, char *base)
{
	int		signe;
	long	result;
	int		i;

	i = 0;
	signe = 1;
	result = 0;
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signe *= -1;
		i++;
	}
	while (char_index(nbr[i], base) != -1)
	{
		result = result * ft_len(base) + char_index(nbr[i], base);
		i++;
	}
	return (result * signe);
}
