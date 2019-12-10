/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:54:36 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/10 19:59:24 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	leninit;
	size_t	lenfinal;
	char	*destrim;

	if (s1 == 0 || set == 0)
		return (NULL);
	leninit = 0;
	while (s1[leninit] != '\0' && ft_strchr(set, s1[leninit]) != 0)
		leninit++;
	lenfinal = ft_strlen(s1);
	if (leninit >= lenfinal)
		return (ft_strdup(""));
	while (s1[lenfinal - 1] && ft_strchr(set, s1[lenfinal]) != 0)
		lenfinal--;
	destrim = ft_substr(s1, leninit, (lenfinal - leninit + 1));
	return (destrim);
}
