/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 12:26:17 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/09 11:33:37 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		main(void)
{
	char const *s;
	unsigned int start;
	size_t len;

	s = "";
	start = 5;
	len = 0;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}
