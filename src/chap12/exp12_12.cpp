#include <set>
using namespace std;
void main() {
    set<int> s;            //����set����s
    set<int>::iterator it; //����set����������it
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(2);
    printf(" s: ");
    for (it = s.begin(); it != s.end(); it++)
        printf("%d ", *it);
    printf("\n");

    multiset<int> ms; //����multiset����ms
    multiset<int>::iterator mit;
    //����multiset����������mit
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(4);
    ms.insert(2);
    printf("ms: ");
    for (mit = ms.begin(); mit != ms.end(); mit++)
        printf("%d ", *mit);
    printf("\n");
}
