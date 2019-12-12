/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 20:52:44 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/11 21:33:56 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main()
{
	char	c;
	char	**testsplit;
	int		i;
	
	i = 0;
	char s[]="En un lugar de la Mancha ...";
	c = ' ';
	testsplit = ft_split(s, c);
	while (testsplit[i])
	{
		printf("%s\n", testsplit[i]);
		i++;
	}
	return (0);
}
