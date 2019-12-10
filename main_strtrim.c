/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 18:45:34 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/09 19:35:45 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int		main(void)
{
	char s1[]="calderilladfcmnop";
	char set[]="almozxf";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
