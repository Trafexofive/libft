/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:08:58 by mlamkadm          #+#    #+#             */
/*   Updated: 2022/12/06 23:16:44 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int num)
{
	int	num_len;

	num_len = 0;
	if (num == 0)
		return (0);
	if (num <= 0)
		num_len = 1;
	while (num != 0)
	{
		num = num / 10;
		num_len++;
	}
	return (num_len);
}

static char	*ft_num_alloc(int num_len)
{
	char	*num_str;
	
	num_str = (char *)malloc((sizeof(char) * num_len));
	if (!num_str)
		return (NULL);
	return (num_str);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	int		num_len;
	int		num;
	char	*num_str;
	
	is_negative = 0;
	num_len = ft_num_len(n);
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	num_str = ft_num_alloc(num_len);
	if (n == 0)
	{
		num_str[0] = '0';
		return (num_str);
	}
	num_len--;
	if (is_negative == 1)
		num_str[0] = '-';
	while (num_len > 0)
	{
		num = n % 10;
		n = n / 10;
		num_str[num_len] = num + '0';
		num_len--;
	}
	return (num_str);
}

// int main(void)
// {
// 	int	num = -1001;

// 	printf("%s", ft_itoa(num));
// }
