/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:18:36 by wconnell          #+#    #+#             */
/*   Updated: 2018/12/05 05:58:34 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t	i;
	char	*new;

	i = 0;
	if ((new = (char*)malloc(ft_strlen(s1) + 1 * sizeof(char))))
	{
		while (i <= ft_strlen(s1))
		{
			new[i] = s1[i];
			i++;
		}
		return (new);
	}
	else
		return (NULL);
}
