#include <stdio.h>
#include <stdlib.h>
#include "../HEADER_FILES/include/dll_basics.h"

int main()
{
    Node *head = NULL;

    for (int i = 0; i < 5; i++)
    {
        head = createList(&head);
    }

    printList(&head);

    return 0;
}
