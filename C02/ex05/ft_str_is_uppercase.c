/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 09:52:52 by username          #+#    #+#             */
/*   Updated: 2026/07/10 09:55:31 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*a = "AEG";
// 	char	*b = "wg1d";
// 	char	*c = "";
// 	printf("    %d    ", ft_str_is_uppercase(a));
// 	printf("    %d    ", ft_str_is_uppercase(b));
// 	printf("    %d    ", ft_str_is_uppercase(c));
// 	return (0);
// }
