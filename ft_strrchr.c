/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 13:56:02 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/01 15:05:16 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{ 
	char	*str;
	size_t	len;

	str = (char *)s;
	len = ft_strlen(str);
	if (c == '\0')
		return (str + len);
	while (len > 0) 
	{
		len--;
		if (str[len] == c)
			return (str + len);
	}
	return (NULL);
}
