/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 13:24:13 by username          #+#    #+#             */
/*   Updated: 2026/07/09 13:50:26 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	int	b[4];
// 	b[0] = 5;
// 	b[1] = 1;
// 	b[2] = 6;
// 	b[3] = 8;
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d  ", b[i]);
// 		i++;
// 	}
// 	ft_sort_int_tab(b, 4);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d  ", b[i]);
// 		i++;
// 	}
// }
