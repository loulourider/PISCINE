/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_convert_base.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/20 13:22:26 by username         #+#    #+#              */
/*   Updated: 2026/07/21 15:39:55 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		char_index(char c, char *base);
int		ft_len(char *str);
int		verif_base(char *base);
long	nb_len(long nb, int base_len);
int		ft_atoi_base(char *nbr, char *base);

char	*convert(char *result, long nb, char *base_to, int signe)
{
	int	base_len;
	int	len;

	base_len = ft_len(base_to);
	len = nb_len(nb, base_len);
	if (signe)
		len++;
	result[len] = '\0';
	while (nb >= base_len)
	{
		len--;
		result[len] = base_to[nb % base_len];
		nb = nb / base_len;
	}
	len--;
	result[len] = base_to[nb % base_len];
	if (signe)
		result[--len] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		signe;
	char	*result;
	long	len;

	if (verif_base(base_from) == -1 || verif_base(base_to) == -1)
		return (NULL);
	signe = 0;
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
	{
		signe = 1;
		nb *= -1;
	}
	len = nb_len(nb, ft_len(base_to)) + signe;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	return (convert(result, nb, base_to, signe));
}
