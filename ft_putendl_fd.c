<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobaled <jcobaled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 13:05:49 by jcobaled          #+#    #+#             */
/*   Updated: 2019/12/15 13:09:11 by jcobaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
=======

include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
>>>>>>> 00a4be6d5134ccf50db9a11df0f4274d24c39b8e
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
