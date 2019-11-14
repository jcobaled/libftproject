/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:38:03 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/12 00:35:07 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	char s[15] = "mediacalcetin";
	char z[15] = "mediacalcetin";
	size_t n;

	n = 0;
	bzero(s, n);
	printf("%s\n", s);
	ft_bzero(z, n);
	printf("%s\n", z);
	return (0);
}
