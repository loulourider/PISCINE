/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:21:41 by username          #+#    #+#             */
/*   Updated: 2026/07/13 19:12:32 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "ZBC";
// 	char	s2[] = "AsCZ";
// 	printf("%d    ", ft_strncmp(s1, s2, 0));
// 	printf("%d", strncmp(s1, s2, 0));
// }
