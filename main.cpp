#include <iostream>
#include "MyStack.h"
using namespace std;

int main()
{
    MyStack *pStack = new MyStack(5);
    pStack->push('h');
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');
    pStack->stackTraverse(false);
    char elem = 0;
    pStack->pop(elem);
    cout<<endl;
    cout<<elem<<endl;
   //pStack->clearStack();
    cout<<endl;
    cout<<pStack->stackLength()<<endl;
    if(pStack->stackEmpty())
    {
        cout<<"Õ»Îª¿Õ"<<endl;
    }
    if(pStack->stackFull())
    {
        cout<<"Õ»ÎªÂú"<<endl;
    }
    delete pStack;
    pStack = NULL;
    return 0;
}
