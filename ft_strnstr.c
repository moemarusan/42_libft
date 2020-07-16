/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 20:41:46 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/16 20:32:29 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;

	h = (char *)haystack;
	n = (char *)needle;
	if (!*needle)
		return (h);
	while (*h && len)
	{
		i = 0;
		while (h[i] == n[i] && *n && i < len)
		{
			if (n[i + 1] == '\0')
				return (h);
			i++;
		}
		len--;
		h++;
	}
	return (NULL);
}
