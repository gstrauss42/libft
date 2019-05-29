/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:08:10 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:53:19 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i = 0;
	while(((s1[i] || s1[i]) != '\0') && i < n)
	{
		if(s1[i] != s2[i])
		{
			i = s1[i] - s2[i];
			return(i);
		}
		i++;
	}
	return(0);
}
