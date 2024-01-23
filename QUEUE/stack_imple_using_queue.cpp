#include <iostream>
#include <queue>

using namespace std;

class StackUsingQueues {
private:
    queue<int> q1, q2;

public:
    void push(int x) {
        q1.push(x);
    }

    int pop() {
        if (q1.empty())
            return -1;

        // Move elements from q1 to q2 except the last one
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // Pop the last element from q1 (top of the stack)
        int poppedElement = q1.front();
        q1.pop();

        // Swap the names of q1 and q2
        swap(q1, q2);

        return poppedElement;
    }
};

int main() {
    StackUsingQueues stack;

    stack.push(2);
    stack.push(3);
    cout << stack.pop() << endl; // Output: 3

    stack.push(4);
   cout << stack.pop() << endl; // Output: 4
    cout << stack.pop() << endl;
    
 
    return 0;
}
