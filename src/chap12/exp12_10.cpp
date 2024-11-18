#include <deque>
using namespace std;

void disp(deque<int>& dq) //���dq������Ԫ��
{
    deque<int>::iterator iter; //���������iter
    for (iter = dq.begin(); iter != dq.end(); iter++)
        printf("%d ", *iter);
    printf("\n");
}

void main() {
    deque<int> dq;    //����һ��˫�˶���dq
    dq.push_front(1); //��ͷ����1
    dq.push_back(2);  //��β����2
    dq.push_front(3); //��ͷ����3
    dq.push_back(4);  //��β����4
    printf("dq: ");
    disp(dq);
    dq.pop_front(); //ɾ����ͷԪ��
    dq.pop_back();  //ɾ����βԪ��
    printf("dq: ");
    disp(dq);
}
