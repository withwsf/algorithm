#include <iostream>
#include "queue.h"
using namespace std;
int main()
{
    PtrToQueue Q=createQueue(4);
    enQueue(1,Q);
    enQueue(2,Q);
    enQueue(3,Q);
    enQueue(4,Q);
    dequeue(Q);
    dequeue(Q);
    enQueue(5,Q);
    enQueue(6,Q);
    dequeue(Q);
    dequeue(Q);
    dequeue(Q);
    dequeue(Q);
    dequeue(Q);



}

