#include <bits/stdc++.h>
using namespace std;

const int limit = 4;
int Queue[limit];
int front = -1;
int rear = -1;

bool isfull()
{

    return rear == limit - 1;
}

bool isempty()
{

    return rear == -1;
}

void push()
{

    if (isfull())
        cout << "Queue is overflow" << endl;
    else
    {

        if (front == -1)
            front += 1;

        int a;
        cout << "Enter your value: ";
        cin >> a;
        rear++;
        Queue[rear] = a;
    }
}

int pop()
{

    if (isempty())
        cout << "Queue is underflow" << endl;
    else
    {

        int temp = Queue[front];
        cout << "Removing: " << temp << endl;
        front++;
        return temp;

    }
}

void show()
{

    if (isempty())
        cout << "Queue is underflow" << endl;
    else
    {
        int i;

        for (i = front; i != rear; i++)
        {
            cout << Queue[i] << endl;
        }

        cout << Queue[i] << endl;
    }
}

int main()
{

    push();
    push();
    push();
    push();
    pop();
    push();
    show();
    

    

    return 0;
}