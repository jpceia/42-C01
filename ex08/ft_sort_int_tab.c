/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:02:48 by jceia             #+#    #+#             */
/*   Updated: 2020/11/28 16:06:01 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int x;
	
	i = 0;
	while(i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if(tab[j] > tab[j+1])
			{
				x = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = x;
			}
			j++;
		}
		i++;
	}
}