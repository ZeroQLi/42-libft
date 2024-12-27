/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtangalv <mtangalv@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:29:46 by mtangalv          #+#    #+#             */
/*   Updated: 2024/12/27 16:27:31 by mtangalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*final;
	int		i;

	i = 0;
	final = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!final)
		return (NULL);
	while (s[i] != '\0')
	{
		final[i] = (*f)((unsigned int) i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}

#include <stdio.h>

char *printig(unsigned int num, char *test)
{
	return ((char *)ft_toupper(test[num]));
}

int main(void)
{
	ft_striteri("hello", &printig);
	char *hell = "d";
}
