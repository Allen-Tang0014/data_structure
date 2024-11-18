/*
���룺
1��2��3
�����
2
���룺
1��2��3��4
�����
2
*/
#include <queue>
#include <iostream>
using namespace std;


priority_queue<int, vector<int>, greater<int>> A; //С����
priority_queue<int> B;                            //�����
void Insert(int x)                                //��������x
{
    if (A.size() == 0) // AΪ�գ�ֱ�Ӳ���x
    {
        A.push(x);
    }
    else if (x > A.top()) // x����A�Ѷ�Ԫ��,���뵽A��
    {
        A.push(x);
        if (A.size() > B.size()) //��A��Ԫ�ض���B�����Ѷ�Ԫ���ƶ���B��
        {
            int e = A.top();
            A.pop();
            B.push(e);
        }
    } else // x������A�Ѷ�Ԫ��,���뵽B��
    {
        B.push(x);
        if (B.size() > A.size()) //��B��Ԫ�ض���A�����Ѷ�Ԫ���ƶ���A��
        {
            int e = B.top();
            B.pop();
            A.push(e);
        }
    }
}

void main() 
{
    int a[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        Insert(a[i]);
    }
    cout << A.top() << endl;
    cout << B.top() << endl;
    printf("\n");
}
