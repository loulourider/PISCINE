/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 10:08:09 by username          #+#    #+#             */
/*   Updated: 2026/07/11 00:45:35 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 31 && str[i] < 127)))
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
// 	char	*c = "\b";
// 	printf("    %d    ", ft_str_is_printable(a));
// 	printf("    %d    ", ft_str_is_printable(b));
// 	printf("    %d    ", ft_str_is_printable(c));
// 	return (0);
// }
