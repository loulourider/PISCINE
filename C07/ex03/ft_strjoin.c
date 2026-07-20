/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 21:42:15 by username          #+#    #+#             */
/*   Updated: 2026/07/19 12:38:55 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strslendel(int size, char **str, char *sep)
{
	int	i;
	int	j;
	int	result;

	result = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			result++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	if (result == i * (size - 1))
		return (0);
	else
		return (result + (i * (size - 1)));
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		mem;
	char	*result;
	int		i;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	mem = ft_strslendel(size, strs, sep);
	result = malloc(mem + 1);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i != size - 1)
		{
			result = ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	char	*strs[3];
// 	char	*sep = ", ";
// 	strs[0] = "abc";
// 	strs[1] = "def";
// 	strs[2] = "ghi";
// 	printf("%s", ft_strjoin(3, strs, sep));
// }
