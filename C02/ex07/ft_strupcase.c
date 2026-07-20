/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 10:55:38 by username          #+#    #+#             */
/*   Updated: 2026/07/12 19:21:27 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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
// 	ft_strupcase(a);
// 	ft_strupcase(b);
// 	ft_strupcase(c);
// 	printf("    %s    ", ft_strupcase(a));
// 	printf("    %s    ", ft_strupcase(b));
// 	printf("    %s    ", ft_strupcase(c));
// 	return (0);
// }
