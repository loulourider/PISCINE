/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 23:27:55 by username          #+#    #+#             */
/*   Updated: 2026/07/14 15:30:54 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] != '\0')
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
// 	char	s1[] = "ABC";
// 	char	s2[] = "ABCZ";
// 	printf("%d", ft_strcmp(s1, s2));
// 	printf("%d", strcmp(s1, s2));
// }
