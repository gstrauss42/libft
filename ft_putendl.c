/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:39:49 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 14:43:11 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdendl(char const *s)
{
	int i;
	i = 0;
	char a;
	a = '\n';
	while(s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, &a, 1);
	return;
}
