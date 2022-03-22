/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:35:43 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/22 14:55:45 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    ft_push(t_stack **src, t_stack **dest)
{
    t_stack *first;
    t_stack *second;

    first = *src;
    if (first == NULL)
        return (1);
    *src = first->next;
    second = *dest;
    *dest = first;
    (*dest)->next = second;
    return (0);
}

void    ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
    if(ft_push(stack_b, stack_a) == 0)
        ft_printf("pa\n");
}

void    ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
    if(ft_push(stack_a, stack_b) == 0)
        ft_printf("pb\n");
} 