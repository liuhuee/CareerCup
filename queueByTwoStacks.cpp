#include<iostream>
#include<stack>

using namespace std;

class MyQueue{
public:
    MyQueue()
    {

    }
    bool empty()
    {
        return stack1.empty() && stack2.empty();
    }

    void push(int val)
    {
        stack2.push(val);
    }

    int pop()
    {
        while(!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        int val = stack1.top();
        stack1.pop();
        return val;
    }
private:
    stack<int> stack1;
    stack<int> stack2;
};


int main()
{
    MyQueue queue;
    queue.push(2);
    queue.push(3);
    queue.push(4);

    while(!queue.empty())
    {
        cout << queue.pop() << endl;
    }

    return 0;
}
