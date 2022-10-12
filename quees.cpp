#include <iostream>

using namespace std;

class myQuee
{
    private:
    int marks[5];
    int front;
    int rear, size;

    public:

    myQuee()
    {
        int front = 0;
        int rear = 0;
        int size = 0;
    }

    void enQuee(int j) //insert
    {
        marks[rear++] = j;
        if (rear > 4)
        {
            rear = 0;
        }
        size ++;
    }

    int deQuee()
    {
        int r = marks[front ++];
        if (front > 4)
        {
            front = 0;
        }
        size --;

        return r;
    }

    int peek()
    {
        return marks[front];
    }

    bool  isEmpty()
    {
        return size == 0;
    }

    bool  isFull()
    {
        return size == 4;
    }
};

int main()
{
    myQuee q1;
    int option, value, position;

    do
    {
        cout << "Quee MANIPULATION MENU " << endl;
        cout << "============================================" << endl;

        cout << "1. enquee()" << endl;
        cout << "2. dequee()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. clear screen" << endl;

        cout << "============================================" << endl;

        cout << "What operation would you like to perform? Select option number or Enter 0 to exit the program." << endl;
        cin >> option;

        switch (option)
        {
            case 0:
            break;

            case 1:
            cout << "Enter a value: ";
            cin >> value;
            q1.enQuee(value);
            break;

            case 2:
            cout << "Dequee function called - deleted value: " << q1.deQuee() << endl;
            break;

            case 3:
            if (q1.isEmpty())
            {
                cout << "Quee is empty " << endl;
            }
            else
            {
                cout << "Quee is not empty " << endl;
            }
            break;

            case 4:
            if (q1.isFull())
            {
                cout << "Quee is full " << endl;
            }
            else
            {
                cout << "Quee is not fall " << endl;
            }
            break;

            case 5:
            cout << "Peek function called " << q1.peek() << endl;
            break;

            case 6:
            system("cls");
            break;

            default:
            cout << "Enter a proper option number" << endl;
        }
    }while (option != 0);

    

    return 0;
}