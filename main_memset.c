/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:49:47 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/21 00:05:59 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int		main(void)
{
	int c;
	size_t len;
	char b[90] = "AAAAAAA";
	
	c = 'a';
	len = 4;
	printf("%s\n", memset(b, c, len));
	printf("%s\n", ft_memset(b, c, len));	
	return (0);
}

