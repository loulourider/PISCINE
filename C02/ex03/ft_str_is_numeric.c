/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 09:48:22 by username          #+#    #+#             */
/*   Updated: 2026/07/10 09:55:09 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*a = "123456789";
// 	char	*b = "wg1d";
// 	char	*c = "";
// 	printf("    %d    ", ft_str_is_numeric(a));
// 	printf("    %d    ", ft_str_is_numeric(b));
// 	printf("    %d    ", ft_str_is_numeric(c));
// 	return (0);
// }
