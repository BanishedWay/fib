#define MAXN 100
typedef int Elemtype;
typedef int Status;

typedef struct {
	Elemtype queue[MAXN];
	int front, rear;
}sequeuetp;

void initqueue(sequeuetp Q);

Status enqueue(sequeuetp& Q, Elemtype x);

Status delqueue(sequeuetp& Q, Elemtype& e);