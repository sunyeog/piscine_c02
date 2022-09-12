/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suno <suno@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:03:09 by suno              #+#    #+#             */
/*   Updated: 2022/09/11 16:33:27 by suno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			a = str[i];
			write(1, &a, 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[(unsigned char)str[i] / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}
