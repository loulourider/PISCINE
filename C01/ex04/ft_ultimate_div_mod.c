/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 10:17:11 by username          #+#    #+#             */
/*   Updated: 2026/07/09 10:25:30 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;

	tempa = *a;
	*a = *a / *b;
	*b = tempa % *b;
}

// int	main(void)
// {
// 	int	num1 = 11;
// 	int	num2 = 5;

// 	ft_ultimate_div_mod(&num1, &num2);
// 	printf("Quotien : %d \n", num1);
// 	printf("Reste : %d", num2);
// 	return (0);
// }
