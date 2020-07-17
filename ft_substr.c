/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:37:16 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/17 09:35:27 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	sublen;

	if (!s)
		return (NULL);
	sublen = ft_strlen(s);
	if (start > ft_strlen(s) || len == 0)
		return (ft_calloc(1,1));
	sublen = (start + len >= sublen ? sublen - start : len);
	if ((p = ft_calloc(sublen + 1, 1)))
		ft_strlcpy(p, s + start, sublen + 1);
	return (p);
}
