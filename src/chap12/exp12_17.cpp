#include <queue>
using namespace std;
void main() {
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    printf("��ͷԪ��: %d\n", qu.front());
    printf("��βԪ��: %d\n", qu.back());
    printf("����˳��: ");
    while (!qu.empty()) //��������Ԫ��
    {
        printf("%d ", qu.front());
        qu.pop();
    }
    printf("\n");
}
