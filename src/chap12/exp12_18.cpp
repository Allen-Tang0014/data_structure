#include <queue>
using namespace std;
void main() {
    priority_queue<int> qu; //�����
    qu.push(3);
    qu.push(1);
    qu.push(2);
    printf("��ͷԪ��: %d\n", qu.top());
    printf("����˳��: ");
    while (!qu.empty()) //��������Ԫ��
    {
        printf("%d ", qu.top());
        qu.pop();
    }
    printf("\n");
}
