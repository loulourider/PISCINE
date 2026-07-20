/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/13 18:48:26 by username         #+#    #+#              */
/*   Updated: 2026/07/16 00:27:30 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lensrc;
	unsigned int	lendest;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size <= lendest)
		return (lensrc + size);
	i = lendest;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lensrc + lendest);
}

int	main(void)
{
	char	dest[70] = "dgygegegegeg";
	char	src[20] = "World";

	printf("%d   ", ft_strlcat(dest, src, 100));
	printf("%s", dest);
}
