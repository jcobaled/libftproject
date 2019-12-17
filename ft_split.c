/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 20:57:12 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/15 13:12:47 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	counter(char const *s, char c)
{
	int		count;
	int		k;

	count = 0;
	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] != c)
		{
			count++;
			while (s[k] != c && s[k] != '\0')
				k++;
		}
		if (s[k] != '\0')
			k++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**plit;
	size_t	i;
	size_t	j;
	int		z;

	if (!s || !(plit = (char **)(ft_calloc(counter(s, c) + 1, sizeof(char *)))))
		return (NULL);
	i = 0;
	j = 0;
	z = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c && s[i])
				i++;
			plit[z++] = ft_substr(s, j, i - j);
		}
		if (s[i] != '\0')
			i++;
	}
	return (plit);
}
