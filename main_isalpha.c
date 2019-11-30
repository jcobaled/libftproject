/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 13:55:54 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/30 14:59:19 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c);

int		main(void)
{
	int	c;

	c = 93;
	printf("%d\t %d\n", isalpha(c), ft_isalpha(c));
	return (0);
}
