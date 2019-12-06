/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 21:16:23 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/06 13:08:45 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	size;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	size = dstsize;
	i = 0;
	if (dstsize == 0)
		return (srclen);
	while (src[i] != '\0' && size - 1 > dstlen)
	{
		dst[dstlen + i] = src[i];
		i++;
		size--;
	}
	if (dstsize != 0 && dstlen < dstsize)
		dst[dstlen + i] = '\0';
	if (dstsize < dstlen)
		return (srclen + dstsize);
	else
		return (dstlen + srclen);
}
