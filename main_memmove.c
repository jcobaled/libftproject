/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 21:00:44 by jcobaled          #+#    #+#             */
/*   Updated: 2019/11/30 23:40:35 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *std, const void *src, size_t len);

int		main(void)
{
char src[12]="kami";
char dst[12]="columpio";
size_t len;

len = 9;
printf("%s\n", memmove(dst, src, len));
printf("%s\n", ft_memmove(dst, src, len));
return (0);
}
