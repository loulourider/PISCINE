/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 20:02:24 by username          #+#    #+#             */
/*   Updated: 2026/07/10 09:54:36 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*a = "Aeg";
// 	char	*b = "wg1d";
// 	char	*c = "";
// 	printf("    %d    ", ft_str_is_alpha(a));
// 	printf("    %d    ", ft_str_is_alpha(b));
// 	printf("    %d    ", ft_str_is_alpha(c));
// 	return (0);
// }
