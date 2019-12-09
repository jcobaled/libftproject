/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 20:57:44 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/09 14:22:18 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoiin(char const *s1, char const *s2);

int		main(void)
{
	char s1[]="coca";
	char s2[]="";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
