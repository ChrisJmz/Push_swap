/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 09:58:54 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/25 11:33:43 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_max_bits(t_stack **stack)
{
    t_stack *head;
    int max;
    int max_bits;

    head = *stack;
    max = head->index;
    max_bits = 0;
    while (head)
    {
        if (head->index > max)
            max = head->index;
        head = head->next;
    }
    while ((max >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void    big_sort(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;
    int i;
    int j;
    int size;
    int max_bits;

    i = 0;
    temp = *stack_a;
    size = ft_lstsize2(*stack_a);
    max_bits = get_max_bits(stack_a);
    while (i < max_bits)
    {
        j = 0;
        while (j++ < size)
        {
            temp = *stack_a;
            if (((temp->index >> i) & 1) == 1)
                ft_rotate_a(stack_a);
            else
                ft_push_b(stack_a, stack_b);
        }
        while (ft_lstsize2(*stack_b) != 0)
            ft_push_a(stack_a, stack_b);
        i++;
    }
}