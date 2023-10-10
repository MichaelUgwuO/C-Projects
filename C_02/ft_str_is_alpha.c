/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugwu <mugwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:17:58 by mugwu             #+#    #+#             */
/*   Updated: 2023/08/31 01:17:12 by mugwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z')
			&& !(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char	str [] = "";

// 	printf("%d", ft_str_is_alpha(str));
// 	return (0);
// }