/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 20:57:12 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/10 20:07:06 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**hajduk;
	int		count;
	int		i;
	int		j;

	count = 0;
	while (s)
	{
		if (*s == c)
			count++;
		s++;
	}
	count++;
	hajduk = (char **)malloc(count  * sizeof(char *) + 1);
	if (hajduk == 0)
		return (NULL);
	i = 0;
	while (count >= 0)
	{	
		j = 0;
		while (s!='\0')
		{
			if (s[j] != c)
			{
				hajduk[i][j] = s[j];
				j++;
			}
			else
				i++;
		}
		count --;
	}
	hajduk[++i][0] = '\0';
	return (hajduk);
}
