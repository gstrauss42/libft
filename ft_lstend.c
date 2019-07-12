/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 09:17:32 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/10 16:13:46 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstend(t_list *head, t_list *new)
{
	t_list *counta;
	t_list *count;

	if (head)
	{
		count = head;
		while (count->next)
		{
			counta = count->next;
			count = counta;
		}
		count->next = new;
		new->next = NULL;
	}
}