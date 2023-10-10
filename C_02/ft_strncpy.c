/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugwu <mugwu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:50:00 by mugwu             #+#    #+#             */
/*   Updated: 2023/08/31 16:21:11 by mugwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	a;

	i = 0;
	a = n;
	while (src[i] != '\0' && i < a)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main()
{
	char	name[] = "Michael";
	char	dude[] = "Thegjjjjhghghghj";
	int	k = 3;

	ft_strncpy(dude, name, k);
	// printf("His name is: %s", dude);
	printf("%s\n", dude);
}