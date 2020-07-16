/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:48:52 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/16 14:33:46 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (d <= s || d >= (s + len))
	{
		i = -1;
		while (++i < len)
			*(d + i) = *(s + i);
	}
	else
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	return (dst);
}
