/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:06:59 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/18 20:56:27 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	if ((p = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1)))
	{
		ft_memcpy(p, s1, ft_strlen(s1));
		ft_memcpy(p + ft_strlen(s1), s2, ft_strlen(s2));
	}
	return (p);
}
