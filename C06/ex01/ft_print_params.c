/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:48:34 by username          #+#    #+#             */
/*   Updated: 2026/07/14 18:58:25 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argrv[])
{
	int		i;
	int		j;
	char	nl;

	nl = '\n';
	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argrv[i][j] != '\0')
		{
			write(1, &argrv[i][j], 1);
			j++;
		}
		write(1, &nl, 1);
		i++;
	}
}
