/*
Develop a stack class to hold a maximum of 10 integers with suitable methods.
Develop a Java main method to illustrate Stack operations.
*/

import java.util.Scanner;

class Stack {
    int[] s = new int[10];
    int top;

    Stack() {
        top = -1;
    }

    void push(int item) {
        if (top != 9) {
            s[++top] = item;
        }
    }

    int pop() {
        if (top < 0) {
            System.out.println("Stack underflow.");
            return 0;
        } else {
            System.out.println("Popped item is:" + s[top]);
            return s[top--];
        }
    }

    void display() {
        if (top == -1) {
            System.out.println("Stack is empty, no item to display");
        } else {
            System.out.println("Item in stack are:");
            for (int i = top; i >= 0; i--) {
                System.out.println(s[i]);
            }
        }
    }
}

class StackMain {
    public static void main(String[] args) {
        int ch;
        Stack stk = new Stack();
        Scanner ob = new Scanner(System.in);

        while (true) {
            System.out.println("Stack operation demo");
            System.out.println("1:push, 2:pop, 3:display item, 4:exit");
            ch = ob.nextInt();

            switch (ch) {
                case 1:
                    if (stk.top == 9) {
                        System.out.println("Stack is full");
                    } else {
                        System.out.println("Enter the item to be pushed");
                        int item = ob.nextInt();
                        stk.push(item);
                    }
                    break;

                case 2:
                    stk.pop();
                    break;

                case 3:
                    stk.display();
                    break;

                case 4:
                    System.exit(0);

                default:
                    System.out.println("Enter the valid choice");
            }
        }
    }
}

/*
    Output:

1.
    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    10

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    20

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    30

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    40

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    50

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    60

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    70

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    80

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    90

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Enter the item to be pushed
    100


2.
    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    1
    Stack is full


3.
    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    3
    Item in stack are:
    100
    90
    80
    70  
    60
    50
    40
    30
    20
    10


4.
    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:100

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:90

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:80

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:70

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:60

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:50

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:40

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:30

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:20

    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Popped item is:10


5.
    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    2
    Stack underflow.


6.
    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    3
    Stack is empty, no item to display


7.
    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    5
    Enter the valid choice

8.
    Stack operation demo
    1:push, 2:pop, 3:display item, 4:exit
    4
*/