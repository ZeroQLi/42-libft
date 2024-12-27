/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtangalv <mtangalv@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:22:20 by mtangalv          #+#    #+#             */
/*   Updated: 2024/12/23 18:13:32 by mtangalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	char	*dest_cd;
	char	*src_cd;

	dest_cd = dest_str;
	src_cd = (char *) src_str;
	if (dest_str < src_str)
		return (ft_memcpy(dest_str, src_str, numBytes));
	else
	{
		if (dest_str != src_str)
		{
			while (numBytes--)
				dest_cd[numBytes] = src_cd[numBytes];
		}
	}
	return (dest_str);
}
