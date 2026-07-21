/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_convert_base.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/20 13:22:26 by username         #+#    #+#              */
/*   Updated: 2026/07/21 02:11:56 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		char_index(char c, char *base);
int		ft_len(char *str);
int		verif_base(char *base);
long	nb_len(long nb, int base_len);
int		ft_atoi_base(char *nbr, char *base);

char	*convert(char *result, char signe, long nb, char *base_to)
{
	int	len;

	len = nb_len(nb, ft_len(base_to));
	result[len + (signe == '-')] = '\0';
	while (len > 0)
	{
		len--;
		result[len + (signe == '-')] = base_to[nb % ft_len(base_to)];
		nb = nb / ft_len(base_to);
	}
	if (signe == '-')
		result[0] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	signe;
	char	*result;
	long	len;

	if (verif_base(base_from) == -1 || verif_base(base_to) == -1)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	signe = 0;
	if (nb < 0)
	{
		signe = '-';
		nb *= -1;
	}
	len = nb_len(nb, ft_len(base_to));
	result = malloc(len + (signe == '-') + 1);
	len = nb_len(nb, ft_len(base_to));
	return (convert(result, signe, nb, base_to));
}
