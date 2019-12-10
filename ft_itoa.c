/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:48:02 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/11 00:55:01 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		putsize(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n = (n * (-1));
		i++;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	if (n <= 9 && n >= 0)
		i++;
	return (i);
}

static void		negative(int *n, char *map)
{
	*n = (*n * (-1));
	map[0] = '-';
}

char			*ft_itoa(int n)
{
	char	*map;
	int		i;

	if (n == -2147483648)
	{
		if (!(map = (char *)malloc(sizeof(char) * 12)))
			return (0);
		ft_strlcpy(map, "-2147483648", 12);
		return (map);
	}
	i = putsize(n);
	if (!(map = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n < 0)
		negative(&n, map);
	map[i--] = '\0';
	while (n > 9)
	{
		map[i--] = (n % 10) + '0';
		n = n / 10;
	}
	map[i] = n % 10 + '0';
	return (map);
}
