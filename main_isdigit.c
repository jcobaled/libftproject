/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:23:32 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/30 14:37:30 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int		ft_isdigit(int c);

int		main(void)
{
	int	c;

	c = 7;
	printf("%d\t%d\n", isdigit(c), ft_isdigit(c));
	return (0);
}
