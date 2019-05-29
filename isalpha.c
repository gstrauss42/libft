/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:59:46 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:47:08 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return(1);
	}
	else
		return(0);
}
