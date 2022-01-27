/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:07:17 by exam              #+#    #+#             */
/*   Updated: 2022/01/13 11:53:48 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	z;
	int	flag;

	flag = 0;
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (j < i)
			{
				if (argv[1][j] == argv[1][i])
					flag = 1;
				j++;
			}
			if (flag == 0)
				write (1, &argv[1][i], 1);
			flag = 0;
			i++;
		}
		flag = 0;
		z = 0;
		while (argv[2][z])
		{
			i = 0;
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][z])
					flag = 1;
				i++;
			}
			if (flag == 0)
			{
				j = 0;
				while (j < z)
				{
					if (argv[2][j] == argv[2][z])
						flag = 1;
					j++;
				}
				if (flag == 0)
					write (1, &argv[2][z], 1);
			}
			flag = 0;
			z++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
