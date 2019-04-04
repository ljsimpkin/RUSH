/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 18:03:54 by klozano-          #+#    #+#             */
/*   Updated: 2018/09/22 19:32:47 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < n)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == n - 1))
			{
				ft_putchar('A');
			}
			else if ((i == x - 1 && j == 0) || (i == x - 1 && j == n - 1))
			{
				ft_putchar('C');
			}
			else if ((i > 0 && i < x - 1) && (j > 0 && j < n - 1))
			{
				ft_putchar(' ');
			}
			else
			{
				ft_putchar('B');
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
