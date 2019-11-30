/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:00:04 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/30 19:08:46 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c);

int		main(void)
{
	int	c;

	c = 7;
	printf("%d\t%d\n", isalnum(c), ft_isalnum(c));
	return (0);
}
