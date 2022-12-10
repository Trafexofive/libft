/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:57:15 by mlamkadm          #+#    #+#             */
/*   Updated: 2022/12/10 05:41:25 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	
	if (*needle == (char)'\0')
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	// if (!needle > !haystack)
	// 	return (NULL);
	while (haystack[i] && len > 0)
	{
		j = 0;
		while (haystack[i] == needle[j] && len > 0 && haystack[j])
		{
			if (needle[j + 1] == '\0')
				return((char *)&haystack[i - j]);
			i++;
			j++;
			len--;
		}
		i++;
		len--;
	}
    return (NULL);
}

// int main()
// {
// 	const char	*needle = "";
// 	const char	*haystack = "worldhello ==";
// 	char *cup;

// 	// char *p = NULL;
// 	// char *pt = "";

// 	// printf("haystack %p\n", haystack);
// 	// printf("needle %p\n", needle);
// 	// int i = 0;
	


	
// 	// while (haystack[i] && haystack != )
// 	// {
// 	// 	printf("index = %d || char = %c\n", i, *haystack);
// 	// 	i++;
// 	// 	haystack++;
// 	// }
// 	size_t p = -1;
// 	cup = ft_strnstr("aaabcabcd", "aabc", -1);
// 	// cup = strnstr("hey", "", 212121);
// 	printf("%s", cup);
// }