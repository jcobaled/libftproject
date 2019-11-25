/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:00:44 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/25 21:35:40 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *std, const void *src, size_t len);

int		main(void)
{
char dst[5]="campo";
char src[10]="condominio";
size_t len;

len = 4;
printf("%s\n", memmove(dst, src, len));
printf("%s\n", ft_memmove(dst, src, len));
return (0);
}
