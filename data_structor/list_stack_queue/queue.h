#ifndef QUEUE
#define QUEUE
struct queue;
typedef queue* PtrToQueue;
PtrToQueue createQueue(int maxsize);
void destroyQueue(PtrToQueue P);
void enQueue(int x, PtrToQueue P);
int dequeue(PtrToQueue P);
bool isFull(PtrToQueue P);
bool isEmpty(PtrToQueue P);
#endif // QUEUE

