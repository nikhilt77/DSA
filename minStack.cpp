#include <iostream>
#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> mainStack;
    stack<int> minStack;
    
    MinStack() { }
    
    void push(int val) {
        mainStack.push(val);
        if(minStack.empty() || val <= minStack.top()){
            minStack.push(val);
        }
    }
    
    void pop() {
        int val = mainStack.top();
        mainStack.pop();
        if(val == minStack.top()){
            minStack.pop();
        }
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack* obj = new MinStack();
    int choice, val;
    
    while(true) {
        cout << "1. Push\n2. Pop\n3. Top\n4. Get Min\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                obj->push(val);
                break;
            case 2:
                obj->pop();
                break;
            case 3:
                cout << "Top element: " << obj->top() << endl;
                break;
            case 4:
                cout << "Minimum element: " << obj->getMin() << endl;
                break;
            case 5:
                delete obj;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
}
