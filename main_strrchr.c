/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 11:14:06 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/01 15:08:04 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int		main(void)
{
	char s[15]="icadenaº";
	int c = 'n';
	
	printf("%s\t%s\n", strchr(s, c), ft_strrchr(s, c));
	return (0);
}
