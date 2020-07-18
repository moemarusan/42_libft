/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:46:12 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/18 21:01:10 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if ((p = ft_calloc(ft_strlen(s) + 1, 1)))
	{
		while (s[i])
		{
			p[i] = (*f)(i, s[i]);
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
