/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtangalv <mtangalv@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:56:57 by mtangalv          #+#    #+#             */
/*   Updated: 2024/12/23 18:12:11 by mtangalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	char	*to_cd;
	char	*from_cd;
	size_t	i;

	to_cd = (char *) to;
	from_cd = (char *) from;
	i = 0;
	if (to != from)
	{
		while (i < numBytes)
		{
			to_cd[i] = from_cd[i];
			i++;
		}
	}
	return (to);
}
