#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <bsd/string.h>
#include <fcntl.h>

int main(void)
{
    /*t_list *test=ft_lstnew("hello");
    t_list *s=NULL;
    ft_lstadd_front(&s,test);
    while (s)
    {
        printf("%s -> ", (char *)s->content);
        s = s->next;
    }
    printf("NULL\n");*/
    t_list *head = NULL;
    t_list *first=ft_lstnew("hhh");
    ft_lstadd_front(&head,first);
    //first->next=head;
    //head = first;
    int ret=ft_lstsize(head);
    printf("%d\n",ret);
    return 0;
}