/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:32:31 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/05 20:32:31 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*tmp;
	int	i;
	int	inv_i;

	i = 0;
	tmp = malloc(size * sizeof(int));
	while (i < size)
	{
		*(tmp + i) = *(tab + i);
			i++;
	}
	i = 0;
	while (i < size)
	{
		inv_i = (i - size + 1) * -1;
		*(tab + i) = *(tmp + inv_i);
		i++;
	}
}
