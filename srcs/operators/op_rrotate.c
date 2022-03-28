/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:40:57 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/28 15:11:08 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rrotate(t_stack **src)
{
	t_stack	*first;
	t_stack	*content;

	if (*src != NULL && (*src)->next != NULL)
	{
		first = *src;
		content = *src;
		while (content->next->next != NULL)
			content = content->next;
		*src = content->next;
		(*src)->next = first;
		content->next = NULL;
		return (0);
	}
	return (1);
}

void	ft_rrotate_a(t_stack **stack_a)
{
	if (ft_rrotate(stack_a) == 0)
		ft_printf("rra\n");
}

void	ft_rrotate_b(t_stack **stack_b)
{
	if (ft_rrotate(stack_b) == 0)
		ft_printf("rra\n");
}

void	ft_rrotate_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rrotate_a(stack_a);
	ft_rrotate_b(stack_b);
	ft_printf("rrr\n");
}
