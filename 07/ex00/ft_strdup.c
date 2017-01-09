/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:36:57 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/02 23:48:40 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	cpy = malloc(i + 1);
	if (cpy != ('\0'))
	{
		while (src[j] != '\0')
		{
			cpy[j] = src[j];
			j++;
			cpy[j] = '\0';
		}
		return (cpy);
	}
	return (0);
}