/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 22:23:11 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/06 11:36:07 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);

int		main(void)
{
	char dst[]="there is no stars in the sky";
	char src[]="the cake is a lie !\0I'm hidden lol\r\n";
	size_t dstsize = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");

	/*	size_t lensrc;
	size_t lendst1;
	size_t lendst2;
	size_t i;
	
	lensrc = ft_strlen(src);
	lendst1 = ft_strlen(dst);
	lendst2 = lendst1 - 1; ;
	i = 0;
	while (lensrc > 0 && dstsize > 1)
	{
		dst[lendst2] = src[i];
		i++;
		lensrc--;
		lendst2++;
		dstsize--;
	}
	dst[lendst2] = '\0';
	return (lendst1 + lensrc);
}
*/
	ft_strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	return (0);
}

