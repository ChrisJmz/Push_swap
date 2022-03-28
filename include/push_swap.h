/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:27:03 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/28 15:25:33 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"
# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		ft_check(int ac, char **av, t_stack **stack);
void	ft_add_last(t_stack **alst, t_stack *new);
t_stack	*ft_stack_new(int content);
int		is_digit(char *str);
void	ft_test(int ac, char **av, t_stack *data);
void	sort_3(t_stack **stack_a);
int		count_stack(t_stack *stack);
void	sort(t_stack **stack_a, t_stack **stack_b);
int		ft_sort_check(t_stack *stack);
int		find_small(t_stack *stack);
void	big_sort(t_stack **stack_a, t_stack **stack_b);
int		find_big(t_stack *stack);
int		ft_lstsize2(t_stack *stack);
void	ft_fill_index(t_stack *stack_a);
void	ft_fill_index_2(t_stack *stack_a, int i);
void	index_stack(t_stack **stack_a);
int		free_stack(t_stack **stack);

// OPERATION
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);
void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(t_stack **stack_b);
void	ft_swap_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_a(t_stack **stack_a);
void	ft_rotate_b(t_stack **stack_b);
void	ft_rotate_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rrotate_a(t_stack **stack_a);
void	ft_rrotate_b(t_stack **stack_b);
void	ft_rrotate_rr(t_stack **stack_a, t_stack **stack_b);

#endif
