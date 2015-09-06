/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/28 16:03:11 by etermeau          #+#    #+#             */
/*   Updated: 2015/05/28 16:03:12 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_lst **lst)
{
	ft_print_color(YELLOW, "sa ", 1);
	
	t_lst	*tmp;
	int		swap;
	
	if (!(*lst)->next)
		return ;
	tmp = *lst;
	while (tmp && tmp->next && tmp->next->next)
		tmp = tmp->next;
	swap = tmp->data;
	tmp->data = tmp->next->data;
	tmp->next->data = swap;	
}

