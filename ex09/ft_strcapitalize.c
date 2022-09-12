/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suno <suno@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:39:56 by suno              #+#    #+#             */
/*   Updated: 2022/09/10 14:40:32 by suno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_so(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_so(str);
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[0] = str[0] - 32;
			i++;
		}
	while(str[i] != '\0')
	{
		if ((str[i - 1] >= '0' && str[i -1] <= '9') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i];
		}
		else if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			{
				str[i] = str[i];
			}
			else
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

