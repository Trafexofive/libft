/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:57:15 by mlamkadm          #+#    #+#             */
/*   Updated: 2022/12/05 07:24:47 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	// size_t	i;
	// int		n;
	// int		count;

	// i = 0;
	// count = 0;
	// if (haystack == needle || needle == 0)
	// 	return ((char *)haystack);
	// while (haystack[i] && len != 0)
	// {
	// 	if (haystack[i] == needle[0])
	// 	{
	// 	}
	// 	i++;
	// 	len--;
	// }
    len = 0;
	haystack = needle;
    
    return (NULL);
} 

// int main()
// {
// 	const char	*haystack = "hello ==  world";
// 	const char	*needle = "world";
// 	char *cup;


// 	cup = ft_strnstr(haystack, needle, 18);
// 	printf("%s", cup);
// }