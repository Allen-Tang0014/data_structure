#include <stack>
using namespace std;
void main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    printf("ջ��Ԫ��: %d\n", st.top());
    printf("��ջ˳��: ");
    while (!st.empty()) //ջ����ʱ��ջ����Ԫ��
    {
        printf("%d ", st.top());
        st.pop();
    }
    printf("\n");
}
