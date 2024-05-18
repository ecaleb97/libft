#include "libft.h"
#include <stdio.h>

void *square(void *content) {
	int *new_content = malloc(sizeof(int));
	*new_content = *(int *)content * *(int *)content;
	return new_content;
}

// Function to delete an integer
void delete_int(void *content) {
    free(content);
}

/* int	main(void) {
	// ft_lstsize
    // Create a list with 3 elements
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->content = 1;
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)lst->next->content = 2;
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)lst->next->next->content = 3;

    // Print the size of the list
    printf("Size of the list: %d\n", ft_lstsize(lst));  // Output: Size of the list: 3

    // Add another element to the list
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)lst->next->next->next->content = 4;

    // Print the size of the list
    printf("Size of the list: %d\n", ft_lstsize(lst));  // Output: Size of the list: 4

    // Clean up
    ft_lstclear(&lst, delete_int);

    return (0);
} */

/* int main() {
    // Create a list with one element
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->content = 1;

    // Add an element to the front of the list
    t_list *new_elem = ft_lstnew(malloc(sizeof(int)));
    *(int *)new_elem->content = 2;
    ft_lstadd_front(&lst, new_elem);

    // Print the list
    t_list *current = lst;
    while (current) {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    // Clean up
    ft_lstclear(&lst, free);

    return 0;
} */

/* int main() {
    // Create a list with one element
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->content = 1;

    // Add an element to the back of the list
    t_list *new_elem = ft_lstnew(malloc(sizeof(int)));
    *(int *)new_elem->content = 2;
    ft_lstadd_back(&lst, new_elem);

    // Print the list
    t_list *current = lst;
    while (current) {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    // Clean up
    ft_lstclear(&lst, free);

    return 0;
} */

/* int main() {
    // Create a list with one element
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->content = 1;

    // Add an element to the back of the list
    t_list *new_elem = ft_lstnew(malloc(sizeof(int)));
    *(int *)new_elem->content = 2;
    ft_lstadd_back(&lst, new_elem);

    // Print the list
    t_list *current = lst;
    while (current) {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    // Clean up
    ft_lstclear(&lst, free);

    return 0;
} */

/* int main() {
    // Create a list with two elements
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->content = 1;
    t_list *second_elem = ft_lstnew(malloc(sizeof(int)));
    *(int *)second_elem->content = 2;
    ft_lstadd_back(&lst, second_elem);

    // Print the list
    printf("Before deletion:\n");
    t_list *current = lst;
    while (current) {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    // Delete the second element
    ft_lstdelone(second_elem, free);
    lst->next = 0;

    // Print the list
    printf("After deletion:\n");
    current = lst;
    while (current) {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    // Clean up
    ft_lstclear(&lst, free);

    return 0;
} */

int main() {
    // Allocate an array of 5 integers
    int *arr = (int *)ft_calloc(5, sizeof(int));

    // Check if the allocation was successful
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the array using a while loop
    int i = 0;
    while (i < 5) {
        printf("%d\n", arr[i]);  // Output: 0
        i++;
    }

    // Clean up
    free(arr);

    return 0;
}