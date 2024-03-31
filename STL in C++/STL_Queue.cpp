#include<iostream>
#include<queue> // for using this Queue we have to add this header file as well as
using namespace std;

// Queue: Queue() is working same as stack() but the only difference is it follow the First Come First Out(FIFO) Rull 
// That's mean the first element is come in the queue() is out the first it's work like a ATM line 

int main() {

queue<int> q;  
q.push(1); // {1}
q.push(2); // {1, 2}
q.push(3); // {1, 2, 3}
q.emplace(5); // {1, 2, 3, 5}

q.back() += 5;

cout << " " << q.back(); // it print 10

//   Q is {1, 2, 3, 9}
cout << " " << q.front(); // it print 1
  
q.pop();  // After that Q is  {2, 3, 9}

cout << " " << q.front(); // it print 
 
   return 0;
}