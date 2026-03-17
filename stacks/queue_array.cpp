#include <iostream>
using namespace std;

// #include <iostream>
// using namespace std;

// class Queue {
//     int arr[100];
//     int front, rear;

// public:
//     Queue() {
//         front = 0;
//         rear = -1;
//     }

//     // enqueue
//     void enqueue(int x) {
//         if (rear == 99) {
//             cout << "Queue Overflow\n";
//             return;
//         }
//         arr[++rear] = x;
//     }

//     // dequeue
//     void dequeue() {
//         if (front > rear) {
//             cout << "Queue Underflow\n";
//             return;
//         }
//         front++;
//     }

//     // peek
//     int peek() {
//         if (front > rear) {
//             cout << "Queue is empty\n";
//             return -1;
//         }
//         return arr[front];
//     }

//     // display
//     void display() {
//         for (int i = front; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
class CircularQueue {
    int arr[5];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if ((rear + 1) % 5 == front) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) front = 0;

        rear = (rear + 1) % 5;
        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % 5;
        }
    }

    void display() {
        if (front == -1) return;

        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % 5;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();   // 10 20 30

   
    q.dequeue();
    q.display();   // 20 30

    return 0;
}