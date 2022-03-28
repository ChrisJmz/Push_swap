/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:39:42 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/28 15:10:13 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_stack **src)
{
	t_stack	*first;
	t_stack	*content;

	if (*src != NULL && (*src)->next != NULL )
	{
		first = *src;
		*src = first->next;
		content = *src;
		while (content->next != NULL)
			content = content->next;
		content->next = first;
		first->next = NULL;
		return (0);
	}
	return (1);
}

void	ft_rotate_a(t_stack **stack_a)
{
	if (ft_rotate(stack_a) == 0)
		ft_printf("ra\n");
}

void	ft_rotate_b(t_stack **stack_b)
{
	if (ft_rotate(stack_b) == 0)
		ft_printf("ra\n");
}

void	ft_rotate_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_a(stack_b);
	ft_printf("rr\n");
}
