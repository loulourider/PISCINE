/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlowcase.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/11 00:43:39 by username         #+#    #+#              */
/*   Updated: 2026/07/12 11:34:33 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

// int	main(void)
// {
// 	char	a[] = "AEG";
// 	char	b[] = "wgd";
// 	char	c[] = "djf";
// 	ft_strlowcase(a);
// 	ft_strlowcase(b);
// 	ft_strlowcase(c);
// 	printf("    %s    ", ft_strlowcase(a));
// 	printf("    %s    ", ft_strlowcase(b));
// 	printf("    %s    ", ft_strlowcase(c));
// 	return (0);
// }
