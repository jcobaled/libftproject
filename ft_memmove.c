/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:34:37 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/30 23:40:31 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	if (len == 0 || src == dst)
		return (dst);
	if (src < dst)
	{
		while (++i <= len)
		{
			d[len - i] = s[len - i];
		}
	}
	else
	{
		while (--len > 0)
		{
			d[i] = s[i];
		}
	}
	return (dst);
}
