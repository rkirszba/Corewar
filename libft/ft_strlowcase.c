/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnussbau <fnussbau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:46:17 by fnussbau          #+#    #+#             */
/*   Updated: 2018/11/16 17:46:26 by fnussbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 65 && str[k] <= 90)
		{
			str[k] = str[k] + 32;
			++k;
		}
		else
			++k;
	}
	return (str);
}
