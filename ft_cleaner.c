/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 21:12:30 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/09 19:54:05 by jcobaled         ###   ########.fr       */
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
	
/*Parámetros
#1. La cadena de caracteres que hay que depurar.
#2. El set de referencia de caracteres que hay que
retirar.
Valor de retorno
La cadena de caracteres depurada. NULL si falla la
reserva de memoria.
Funciones exter- nas autorizadas
malloc
Descripción
Reserva memoria (con malloc(3)) para la cadena de
caracteres que va a devolver, que es una copia
de la cadena de caracteres pasada como argumento,
sin los caracteres indicados en el set pasado como
argumento al principio y al final de la cadena de
caracteres.*/
