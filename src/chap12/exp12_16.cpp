#include <iostream>
#include <stack> //����stack<T>ջ����
using namespace std;
#define MAX_SIZE 8
int H[4] = {0, 1, 0, - 1}; //ˮƽƫ����,�±��Ӧ��λ��0��3
int V[4] = {-1, 0, 1, 0};  //��ֱƫ����
char Maze[MAX_SIZE][MAX_SIZE] = {
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'} ,
    { 'O', 'O', 'O', 'O', 'O', 'X', 'X', 'X'} ,{
        'X', 'O', 'X', 'X', 'O', 'O', 'O', 'X'} ,{
        'X', 'O', 'X', 'X', 'O', 'X', 'X', 'O'} ,{
        'X', 'O', 'X', 'X', 'X', 'X', 'X', 'X'} ,{
        'X', 'O', 'X', 'X', 'O', 'O', 'O', 'X'} ,{
        'X', 'O', 'O', 'O', 'O', 'X', 'O', 'O'} ,{
        'X', 'X', 'X', 'X', 'X', 'X', 'X', 'O'}};
typedef struct {
    int i;  //��ǰ������к�
    int j;  //��ǰ������к�
    int di; // di����һ���ڿ��߷�λ�ķ�λ��
} Box;      //��������


bool FindPath(int X,int Y) //���Ҵ�(X,Y)������һ���Թ�·��
{
    Box e;
    int i,j,i1,j1,k,di;
    bool find;
    stack<Box> st;
    e.i = X;
    e.j = Y;
    e.di = -1;
    st.push(e); //��ڷ����ջ
    Maze[X][Y] = ' ';
    while (!st.empty()) //ջ����ѭ��
    {
        e = st.top(); //ȡջ������e
        i = e.i;
        j = e.j;
        di = e.di;
        if (i == MAX_SIZE - 1 && j == MAX_SIZE - 1) //�ҵ�һ��·��,���
        {
            for (int r = 0; r < MAX_SIZE; r++) {
                printf("  ");
                for (int c = 0; c < MAX_SIZE; c++)
                    printf("%c", Maze[r][c]);
                printf("\n");
            }
            return true;
        } else //��û���ҵ����ڵ����
        {
            find = false;
            for (k = di + 1; k < 4; k++) //��̽(i,j)��di����ķ�λ
            {
                i1 = i + V[k];
                j1 = j + H[k];
                if (i1 >= 0 && i1 < MAX_SIZE && j1 >= 0 && j1 < MAX_SIZE &&
                    Maze[i1][j1] == 'O') {
                    find = true; //�ҵ�(i,j)��һ���������ڷ���(i1,j1)
                    break;
                }
            }
            if (find) //�ҵ�һ���������ڷ���(i1,j1)
            {
                st.top().di = k; //�޸�ԭջ��Ԫ�ص�diֵΪk
                e.i = i1;
                e.j = j1;
                e.di = -1;
                st.push(e); //���ڿ��߷���e��ջ
                Maze[i1][j1] = ' ';
            } else {
                st.pop();         //��ջ��������ջ
                Maze[i][j] = 'O'; //�ָ���ջ������Թ�ֵ
            }
        }
    }
    return false;
}

void main() 
{ 
    FindPath(0, 0);
    printf("\n");
}
