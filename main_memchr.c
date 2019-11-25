/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 23:22:03 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/25 23:56:05 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	char s[13]="correcaminos";
	int c;
	size_t n;

	c = 'a';
	n = 13;
	printf("%s\n", memchr(s, c, n));
	printf("%s\n", ft_memchr(s, c, n));
	return (0);
}
