/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:33:04 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/01 23:33:06 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl_fd(char const *s, int fd)
{
	int i;

	i = ft_putstr_fd(s, fd);
	i += ft_putchar_fd('\n', fd);
	return (i);
}
