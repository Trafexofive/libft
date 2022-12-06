/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamkadm <mlamkadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:45:38 by mlamkadm          #+#    #+#             */
/*   Updated: 2022/12/06 02:16:42 by mlamkadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_free(char **two_d_array)
{
	int	i;

	i = 0;
	while (two_d_array[i])
	{
		free(two_d_array[i]);
		i++;
	}
	free(two_d_array);
}

static	int	ft_two_d_array_len(const char *str, char delim)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	flag = 0;
	count = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != delim)
		{
			flag = 1;
			count++;
		}
		else if (str[i] == delim)
			flag = 0;
		i++;
	}
	return (count);
}

static char		*ft_2d_alloc(const char *array, int end)
{
	int	i;
	char	*str;

	i = 0;
	str = (char *)malloc(end + 1);
	if (!str)
		return (NULL);
	while (array[i] && i < end)
	{
		str[i] = array[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int	i;
	int	j;
	int	two_d_len;
	char	**two_d_array;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	two_d_len = ft_two_d_array_len(s, c);
	if (!s)
		return (NULL);
	two_d_array = (char **)malloc(sizeof(char *) * (two_d_len + 1));
	if (!two_d_array)
	{
		ft_free(two_d_array);
		return (NULL);
	}
	two_d_array[two_d_len] = NULL;
	while (s[i] && j < two_d_len)
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c)
		{
			if (s[i] != c)
			{
				while (s[i] != c && s[i])
					i++;
				s += i + 1;
				flag = 1;
			}
			i++;
		}
		i--;
		two_d_array[j] = ft_2d_alloc(s, i);
		if (!two_d_array)
		{
			ft_free(two_d_array);
			return (NULL);
		}
		j++;
		if (flag == 0)
			s += i + 1;
		i = 0;
		flag = 0;
	}
	return (two_d_array);
}

int main(void)
{
	char **str;
    // str = ft_split("test a test1 a", ' ');
    // while (str[0][1])
	int	i = 0;
	const char	*s;
	char		c;


	s = "    hel khfehf-249rbddfbdg g . hfghg fhgfh gh fghgh fgr hgr tdrg tb     dfg  dfg d fgh hdmk l924rilo gfgfworl djhjhjk hjjj jjjj";
	c = ' ';
	str = ft_split(s, c);
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}

	// printf("%d", ft_two_d_array_len("ff  f f", ' '));
}
