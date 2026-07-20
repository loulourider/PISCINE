/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 09:50:20 by username          #+#    #+#             */
/*   Updated: 2026/07/10 09:56:00 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 96 && str[i] < 123)))
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
// 	char	*b = "wgd";
// 	char	*c = "";
// 	printf("    %d    ", ft_str_is_lowercase(a));
// 	printf("    %d    ", ft_str_is_lowercase(b));
// 	printf("    %d    ", ft_str_is_lowercase(c));
// 	return (0);
// }
