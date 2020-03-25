#include "queue.h"

void initqueue(sequeuetp Q)
{
	Q.front = 0;
	Q.rear = 0;
}

Status enqueue(sequeuetp& Q, Elemtype x)
{
    if (Q.rear == MAXN)
        return  0;            //队列已满
    else {
        Q.queue[Q.rear] = x;
        Q.rear++;
        return  1;
    }
}
Status delqueue(sequeuetp& Q, Elemtype& e)
{
    if (Q.front == Q.rear)
        return  0;          //队列空
    else {
        e = Q.queue[Q.front];
        Q.front++;
        return  1;
    }
}