/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:16:13 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/22 21:47:25 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *new;

	if ((new = (char*)malloc(sizeof(char) * size + 1)))
	{
		ft_bzero(new, size + 1);
		return (new);
	}
	else
		return (NULL);
}
