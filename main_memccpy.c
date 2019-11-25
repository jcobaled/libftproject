/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:36:17 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/25 23:42:42 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

int		main(void)
{
	char dst[22]="precolombino";
	char src[22]="pandereta";
	int c;
	size_t n;

	c = 'p';
	n = 6;
	printf("%s\n", memccpy(dst, src, c, n));
	printf("%s\n", ft_memccpy(dst, src, c, n));
	return (0);
}
