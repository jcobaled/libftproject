/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 00:40:33 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/30 13:47:10 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s);

int		main(void)
{
	char	s[12]="";

	printf("%zu\n", strlen(s));
	printf("%zu\n", ft_strlen(s));
	return (0);
}
