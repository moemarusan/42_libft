/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 19:51:17 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/16 20:16:31 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;

	if ((s2 = ft_calloc(ft_strlen(s1) + 1, 1)))
		ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
