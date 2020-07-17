/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 01:37:48 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/18 03:11:54 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_found_c_in_set(char c, char const *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && is_found_c_in_set(*s1, set))
		s1++;
	s = (char *)s1;
	while (*s1)
		s1++;
	s1--;
	while (is_found_c_in_set(*s1, set))
		s1--;
	len = s1 - s + 1;
	return (ft_substr(s, 0, len));
}
