/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:18:49 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/25 21:38:38 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*str;
	size_t				i;
	unsigned char		p;

	str = (unsigned char *)b;
	p = c;
	i = 0;
	while (i < len)
	{
		str[i] = p;
		i++;
	}
	return (b);
}
