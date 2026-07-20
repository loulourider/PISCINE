/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 11:40:18 by username          #+#    #+#             */
/*   Updated: 2026/07/09 13:50:07 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	int	b[4];
// 	b[0] = 1;
// 	b[1] = 2;
// 	b[2] = 3;
// 	b[3] = 4;
// 	for (i = 0; i < 4; i++)
// 	{
// 		printf("%d   ", b[i]);
// 	}
// 	ft_rev_int_tab(b, 4);
// 	for (i = 0; i < 4; i++)
// 	{
// 		printf("    %d", b[i]);
// 	}
// }
