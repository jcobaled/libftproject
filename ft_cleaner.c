/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleaner.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 13:27:11 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/15 13:27:27 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cleaner(char const *s1, char const *set)
{
	char	*c;
	char	*dst;
	size_t	i;
	size_t	j1;
	size_t	j2;
	size_t	k;

	if (s1 == 0)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dst == 0)
		return (NULL);
	c = (char *)set;
	i = 0;
	j1 = 0;
	j2 = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j1 = 0;
		j2 = 0;
		while (set[j1] != 0)
		{
			if (set[j1] == s1[i])
				j2++;
			j1++;
		}
		if (j2 == 0)
		{	dst[k] = s1[i];
			k++;
		}
		i++;
	}
	dst[k] = '\0';
	return (dst);
}
