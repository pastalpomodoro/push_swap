#include "push_swap.h"

void print_a(t_num **pile_a)
{
    t_num *temp;

    temp = *pile_a;
    while (temp != NULL)
    {
        ft_printf("%d\n", temp->num);
        temp = temp->next;
    }
    ft_printf("\n");
}
void print_b(t_num **pile_b)
{
    t_num *temp;

    temp = *pile_b;
    while (temp != NULL)
    {
        ft_printf("%d\n", temp->num);
        temp = temp->next;
    }
    ft_printf("\n");
}

int if_bigger(t_num *pile)
{
    t_num *temp;

    if (pile == NULL || pile->next == NULL)
        return (-1);
    temp = pile;
    temp = temp->next;
    if (temp->num > pile->num)
        return (1);
    return (0);
}

void mooving(t_num **pile_a, t_num **pile_b)
{
    while (my_lstlen(pile_a) != 0)
    {
        if (if_bigger(*pile_a) == 1)
            sa(pile_a);
        pb(pile_a, pile_b);
        if (if_bigger(*pile_b) == 0)
            sb(pile_b);
    }
}

void test(t_num **pile_a, t_num **pile_b)
{
    mooving(pile_a, pile_b);

    print_a(pile_a);
    print_b(pile_b);
}
//FAIRE UN FT_LSTFINDBACK