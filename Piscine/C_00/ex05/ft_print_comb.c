/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjpa <hyungjpa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:46:31 by hyungjpa          #+#    #+#             */
/*   Updated: 2022/08/29 20:57:40 by hyungjpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[3];
	char	c[2];

	c[0] = ',';
	c[1] = ' ';
	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write(1, num, 3);
				if (num[0] == '7' && num[1] == '8' && num[2] == '9')
					break ;
				write(1, c, 2);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
