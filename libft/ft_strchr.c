/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtran <qtran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:04:49 by qtran             #+#    #+#             */
/*   Updated: 2022/10/25 18:31:30 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i])
		i++;
	if (s[i] == (char)c)
		return ((char *)(&s[i]));
	else
		return (NULL);
}

/* int main()
{
    const char *s = "abcfde";
    printf("Return: %s", ft_strchr(s, 'b' + 255));
    printf("%c", 't' + 255);
    return (0);
	//(s + i) geht auch
} */