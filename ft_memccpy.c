/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:49:19 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/17 23:40:01 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = dst;
	s = (unsigned char *)src;
	while (n--)
	{
		*d++ = *s;
		if (*s++ == (unsigned char)c)
			return (d);
	}
	return (NULL);
}
