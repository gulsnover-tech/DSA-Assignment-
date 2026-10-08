#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue() {
    int value;

    if ((rear + 1) % MAX == front) {
        printf("Queue is Full\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    if (front == -1) {
        front = 0;
    }

    rear = (rear + 1) % MAX;
    queue[rear] = value;

    printf("%d inserted into queue.\n", value);
}

void dequeue() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);

    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        front = (front + 1) % MAX;
    }
}

void showFront() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}

void display() {
    int i;

    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue elements: ");

    i = front;

    while (1) {
        printf("%d ", queue[i]);

        if (i == rear) {
            break;
        }

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Circular Queue Using Array ---\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. FRONT\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                showFront();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}