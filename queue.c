#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
    }

    else
    {
        if (front == -1)
            front = 0;
        {
            queue[++rear] = value;
            printf("Enqueued %d\n", value);
        }
    }
}

int dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow\n");
        return -1;
    }

    else
    {
        return queue[front++];
    }
}

int peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }

    else
    {
        printf("Queue Element are: \n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d", queue[i]);
        }
        printf("\n");
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue element are: \n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\n1. Enqueue \n2. Dequeue \n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter a Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            value = dequeue();
            if (value != 1)
            {
                printf("Dequeue: %d\n", value);
                break;
            }

        case 3:
            value = peek();
            if (value != 1)
            {
                printf("Front element: %d\n", value);
                break;
            }

        case 4:
            display();
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid Choice");
        }
    }
}