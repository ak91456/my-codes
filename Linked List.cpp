#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// time complexity of inserting at last is o(n)
void insertatlast(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// time complexity of inserting at last is o(1)
void insertatfront(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// worst time complexity of inserting is at front/last is o(n)
void insertafter(node *&head, int val, int position)
{
    node *n = new node(val);
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == position)
        {
            n->next = temp->next;
            temp->next = n;
            break;
        }
        temp = temp->next;
    }
}

// worst time complexity of inserting  is at front/last is o(n)
void insertatspecfic(node *&head, int val, int position)
{
    if (position == 0)
    {
        insertatfront(head, val);
    }
    else
    {
        node *n = new node(val);
        node *temp = head;
        int count = 0;
        while (count < position - 1 && temp != NULL)
        {
            temp = temp->next;
            count = count + 1;
        }
        if (temp == NULL)
        {
            return;
        }
        n->next = temp->next;
        temp->next = n;
    }
}

// time complexity of deltetion at front is O(1)
void deleteatfront(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

// time complexity of deletion at last is o(n)
void deleteatlast(node *&head)
{
    if (head == nullptr)
    {
        cout << "\nThe linked list is empty.\n"
             << endl;
        return;
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    node *current = head;
    while (current->next->next != nullptr)
    {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
}

// worst time complexity of deletion is o(n)
void deleteatspecific(node *&head, int position)
{
    if (position == 0)
    {
        cout << "\n...Linked List is empty...\n"
             << endl;
    }
    else if (position == 1)
    {
        deleteatfront(head);
    }
    else
    {
        node *temp = head;
        int count = 0;
        while (count < position - 2 && temp != NULL)
        {
            temp = temp->next;
            count = count + 1;
        }
        if (temp == NULL)
        {
            cout << "\nno element at " << position << endl;
            return;
        }
        temp->next = NULL;
    }
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void insertion(node *&head)
{
    int choice1, choice2;
    int val;
    do
    {
        cout << "\nchoose an option : \n"
             << "1 for inserting new value\n"
             << "2 for exiting\n"
             << "choice : ";
        cin >> choice1;
        switch (choice1)
        {
        case 1:
            cout << "\nenter a value : ";
            cin >> val;
            cout << "\nchoose options : \n"
                 << "1 insert end of list\n"
                 << "2 for front\n"
                 << "3 for adding after certain value\n"
                 << "4 for adding at specific position\n"
                 << "5 for exiting\n"
                 << "choice : ";
            cin >> choice2;
            switch (choice2)
            {
            case 1:
                insertatlast(head, val);
                break;
            case 2:
                insertatfront(head, val);
                break;
            case 3:
                cout << "after which value : ";
                int pos;
                cin >> pos;
                insertafter(head, val, pos);
                break;
            case 4:
                int position;
                cout << "enter which position : ";
                cin >> position;
                insertatspecfic(head, val, position);
                break;
            case 5:
                cout << "\nexiting\n";

            default:
                cout << "enter a valid choice";
            }

            break;
        case 2:
            cout << "exiting...";
            break;

        default:
            cout << "\n enter valid value \n";
        }
    } while (choice1 != 2);
}

void deletion(node *&head)
{
    int choice, position;
    do
    {
        cout << "\nwhere to delete : \n"
             << "1 for front\n"
             << "2 for last\n"
             << "3 for certain position\n"
             << "4 for exit\n"
             << "choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            deleteatfront(head);
            break;
        case 2:
            deleteatlast(head);
            break;
        case 3:
            cout << "\nat which position : ";
            cin >> position;
            deleteatspecific(head, position);
            break;
        case 4:
            cout << "exiting...\n";
            break;
        default:
            cout << "\nenter a valid choice\n";
        }
    } while (choice != 4);
}

int main()
{
    node *head = NULL;
    int val;
    cout << "enter a value : ";
    cin >> val;
    insertatlast(head, val);
    cout << "\ncreated a linked list \n";
    int a;
    do
    {
        cout << "\nenter a choice : \n"
             << "1 for insertion \n"
             << "2 for deletion \n"
             << "3 for printing the list \n"
             << "4 for exiting \n"
             << "choice : ";
        cin >> a;
        switch (a)
        {
        case 1:
            insertion(head);
            break;
        case 2:
            deletion(head);
            break;
        case 3:
            print(head);
            break;
        case 4:
            cout << "exiting...";
            break;
        }
    } while (a != 4);
    return 0;
}