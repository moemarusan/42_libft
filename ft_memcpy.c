/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:36:28 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/16 09:07:07 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = dst;
	s = (unsigned char*)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}
