/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:28:38 by mlamkadm          #+#    #+#             */
/*   Updated: 2022/10/26 18:04:27 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ss1;
	const char	*ss2;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (s1 == s2)
		return (0);
	while (n-- > 0)
	{
		if (*ss1 != *ss2)
			return (*(unsigned char *)ss1 - *(unsigned char *)ss2);
		ss1++;
		ss2++;
	}
	return (0);
}
