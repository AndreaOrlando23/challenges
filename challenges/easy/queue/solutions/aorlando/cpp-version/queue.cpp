#include <iostream>
#include <vector>
using namespace std;

class Queue 
{
    private:
    vector<int> myQueue;

    public:

    void enqueue(int item) {
        myQueue.push_back(item);
    }

    int dequeue() {
        int x = 0;
        if(isEmpty()) {
            cout << "Queue is Empty. The values in queue are: ";
            return 0;  //we have to return some value couse of the int function
        }
        else {
            x = myQueue.at(0);
            myQueue.erase(myQueue.begin());
            cout << "Dequeued Value: "; 
            return x;
        }
    }

    int peek() {
        if(!isEmpty()) {
            cout << "The last item inserted is: ";
            return myQueue.at(0);
        }
        else 
            cout << "Queue is Empty. The values in queue are: ";
            return 0;
    }

    bool isEmpty() {
        return myQueue.size() == 0;
    }

    int size() {
        return myQueue.size();
    }

    void display() {
        cout << "|";
        for(int i=0; i<myQueue.size(); i++) {
            cout << myQueue[i] << "|";
        }
    }
};


int main() {
    Queue test1;
    int option, item;

    do {
        cout << "\n\nWhat operation do you want to perform? Select Option number (0 to exit)." << endl;
        cout << "1. enqueue(item)" << endl;
        cout << "2. dequeue()" << endl;
        cout << "3. peek()" << endl;
        cout << "4. isEmpty()" << endl;
        cout << "5. size()" << endl;
        cout << "6. display()" << endl;
        

        cin >> option;

        switch(option) {
            case 0:
                break;

            case 1:
                cout << "*** Enqueue Operation 1*** \nPlease enter an item to Enqueue in the Queue:"<<endl;
                cin >> item;
                test1.enqueue(item);
                break;

            case 2:
                cout << "*** Dequeue Operation ***\n" << test1.dequeue() <<endl;
                break;
            
            case 3:
                cout << "*** Peek Operation ***\n" << test1.peek() <<endl;
                break;
            
            case 4:
                if(test1.isEmpty())
                    cout << "Queue is Empty." << endl;
                else
                    cout << "Queue is NOT Empty." << endl;
                break;
            
            case 5:
                cout << "*** Size Operation *** \nCount of items in Queue: " << test1.size() <<endl;
                break;
            
            case 6:
                cout << "*** Display Function Called *** \nAll items in the Queue are: ";
                test1.display();
                break;
            
            default:
                cout << "Please enter a valid option number. " << endl;
                break;
        }
    }
    while(option!=0);

    return 0;
}