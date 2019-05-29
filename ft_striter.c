/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:42:34 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:42:39 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		f(s[i]);
		i++;
	}
}
