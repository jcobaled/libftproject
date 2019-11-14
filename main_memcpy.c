/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 00:38:19 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/12 21:06:03 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int		main(void)
{
	char dst[7]="";
	char src[90]="palacio";
	size_t n;
	
	n = 6;
	printf("%s\n", memcpy(dst, src, n));
	printf("%s\n", memcpy(dst, src, n));
	return (0);
}	
