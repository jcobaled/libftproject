/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:41:09 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/09 23:19:30 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t len;

	if (dst == 0 || src == 0)
		return (0);
	len = 0;
	while (src[len] != '\0' && dstsize > 1)
	{
		dst[len] = src[len];
		len++;
		dstsize--;
	}
	if (dstsize != 0)
		dst[len] = '\0';
	return (ft_strlen(src));
}
