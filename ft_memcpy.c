/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:18:55 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/12 21:06:06 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *d;
	unsigned const char *s;
	size_t i;

	d = dst;
	s = src;
	i = 0;
	while (n != 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
