/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:31:04 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/04 13:31:06 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, inb *b, int *******c, int ****d)
{
	int temporary_c;

	temporary_c = *******c;
	*******c = ***a;
	****d = temporary_c;
	*b = ****d;
	*b = ***a;
}
