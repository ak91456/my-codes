import java.util.*;

public class Stack {
    private int[] stackArray;
    private int top;
    private int capacity;

    public Stack(int capacity) {
        this.capacity = capacity;
        this.stackArray = new int[capacity];
        this.top = -1;
    }

    public void push(int value) {
        if (top < capacity - 1) {
            stackArray[++top] = value;
        } else {
            System.out.println("Stack Overflow: Cannot push " + value + ". Stack is full.");
        }
    }

    public int pop() {
        if (top >= 0) {
            return stackArray[top--];
        } else {
            System.out.println("Stack Underflow: Cannot pop. Stack is empty.");
            return Integer.MIN_VALUE;
        }
    }

    public int peek() {
        if (top >= 0) {
            return stackArray[top];
        } else {
            System.out.println("Stack is empty.");
            return Integer.MIN_VALUE;
        }
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public int size() {
        return top + 1;
    }

    public static void main(String[] args) {
        Stack stack = new Stack(5);
        Scanner scanner=new Scanner(System.in);
        System.out.println("enter a number : ");
        int x=scanner.nextInt();
        stack.push(x);
        stack.push(20);
        stack.push(30);

        System.out.println("Size of the stack: " + stack.size());
        System.out.println("Top element: " + stack.peek());

        System.out.println("Popping elements from the stack:");
        while (!stack.isEmpty()) {
            System.out.println(stack.pop());
        }

        System.out.println("Size of the stack after popping: " + stack.size());
    }
}