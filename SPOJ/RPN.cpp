#include<iostream>
using namespace std;
string result;

struct node
{
    char data;
    node* next;
};


class Stack
{
private:
    node* head;


public:
    Stack()
    {
        head = NULL;
    }

    void push(char data)
    {
        node* temp = new node;
        temp->data = data;
        temp->next = NULL;

        node* ptr = head;
        head = temp;
        head->next = ptr;
    }

    char top()
    {
        return head->data;
    }

    char pop()
    {
        node* temp = head;
        head = temp->next;
        char a = temp->data;
        delete temp;
        return a;
    }
};

bool checkForPrescedance(char a , char b)
{
    int A = 0 ;
    int B = 0 ;
    if( a == '-')
    {
        A = 1 ;
    }
    else if ( a == '+')
    {
        A = 2 ;
    }
    else if ( a == '*')
    {
        A = 3 ;
    }
    else if ( a == '/')
    {
        A = 4 ;
    }
    else
    {
        A = 5 ;
    }
      if( b == '-')
    {
        B = 1 ;
    }
    else if ( b == '+')
    {
        B = 2 ;
    }
    else if ( b == '*')
    {
        B = 3 ;
    }
    else if ( b == '/')
    {
        B = 4 ;
    }
    else
    {
        B = 5 ;
    }
    return ( A > B) ? true : false ;
}

bool checkForOperators(char a)
{
    if (a == '*' || a == '-' || a == '/' || a == '+' || a == '^')
    {
        return true;
    }
    return false;
}

int main()
{
    int testCase ;
    cin >> testCase ;
    Stack stack;
    while(testCase--)
    {
    string value = "";
    cin >> value;
    result = "";
    for (unsigned int i = 0; i < value.length(); i++)
    {
        if (value[i] == '(')
        {
            stack.push('(');
        }
        else if (value[i] == ')')
        {
            while (stack.top() != '(')
            {
                result += stack.pop();
            }
            stack.pop();
        }
        else if (checkForOperators(value[i]))
        {
            if (checkForOperators(stack.top()))
            {
                while (checkForPrescedance(stack.top(), value[i]))
                {
                    result += stack.pop();
                }
                    stack.push(value[i]);
            }
            else
            {
                stack.push(value[i]);
            }
        }
        else
        {
            result += value[i];
        }
    }
    cout << result << endl ;
    }


    return 0;
}
