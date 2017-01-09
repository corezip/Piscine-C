/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:47:27 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/07 17:47:28 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i][0] != '\0')
	{
		if (f(tab[i]) == 1)
			return (1);
		i += 1;
	}
	return (0);
}
