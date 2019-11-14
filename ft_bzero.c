/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:37:45 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/12 20:41:33 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str;

	str = s;
	i = 0;
	while (n > 0)
	{
		str[i] = 0;
		i++;
		n--;
	}
}
