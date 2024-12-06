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
// fonction qui permet de comprendre sy le premier numero de la pile est le plus petit de toute la pile
int if_smaller(t_num *pile)
{
    int n;

    n = pile->num;
    while (pile != NULL)
    {
        if (n > pile->num)
            return (0);
        pile = pile->next;
    }
    return (1);
}
// fonction qui permet de comprendre sy le premer numero de la pile est plus grand que l enumero d apres
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
    int count;

    count = 0;
    while (my_lstlen(pile_a) != 0)
    {
        if (if_smaller(*pile_a) == 1)
        {
            pb(pile_a, pile_b);
            count++;
        }
        else
        {
            ra(pile_a);
            count++;
        }
    }
    ft_printf("%d\n", count);
}

void test(t_num **pile_a, t_num **pile_b)
{
    mooving(pile_a, pile_b);

    print_a(pile_a);
    print_b(pile_b);
}
//FAIRE UN FT_LSTFINDBACK