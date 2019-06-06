/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:00 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/06 14:12:14 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char		*substring(char const *a, char c, int i)
{
	char	*ret;
	int		p;
	int		b;

	b = i;
	p = 0;
	while (a[i] != c)
		i++;
	ret = (char *)malloc(i - b + 1 * sizeof(char));
	while (b < i && a[b] != '\0')
	{
		ret[p] = a[b];
		b++;
		p++;
	}
	ret[p] = '\0';
	return (ret);
}

static int		length(char const *s, char c)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			if (s[i + 1] != c)
				ret++;
			i++;
		}
		i++;
	}
	return (ret);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		g;
	char	**ret;

	i = 0;
	if(!s)
		return (NULL);
	g = length(s, c);
	ret = (char **)malloc(g * sizeof(char **));
	if(!ret)
		return(NULL);
	g = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			ret[g] = substring(s, c, i);
			g++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	ret[g] = NULL;
	return (ret);
}
