/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtangalv <mtangalv@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:07:44 by mtangalv          #+#    #+#             */
/*   Updated: 2024/12/24 11:36:18 by mtangalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*to_str1;
	char	*to_str2;
	size_t	i;

	to_str1 = (char *)str1;
	to_str2 = (char *)str2;
	i = 0;
	while (i < n)
	{
		if (to_str1[i] != to_str2[i])
			return ((unsigned char) to_str1[i] - (unsigned char) to_str2[i]);
		i++;
	}
	return (0);
}
