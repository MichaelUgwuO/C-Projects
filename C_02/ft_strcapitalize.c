/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugwu <mugwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:15:17 by mugwu             #+#    #+#             */
/*   Updated: 2023/08/31 16:30:47 by mugwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] == ' ') && (str[i + 1] >= 'a' && str[i +1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (*str);
}

// int	main()
// {
// 	char words[] = "22alutrante-deux; cinquante+et+un";

// 	ft_strcapitalize(words);
// 	printf("%s", words);
// 	return (0);
// }