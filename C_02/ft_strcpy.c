/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugwu <mugwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:23:08 by mugwu             #+#    #+#             */
/*   Updated: 2023/08/31 16:14:49 by mugwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

int	main()
{
	char	str1[]= "Michael";
	char	str2[]= "Michael Ugwu";

	ft_strcpy(&str2[0], &str1[0]);
	printf ("His name is: %s", str2);
}