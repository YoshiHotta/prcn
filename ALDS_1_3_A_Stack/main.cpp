/*
#include <iostream>

using namespace std;

char a[100];
int stack[100];
int top = 0;

int pop() {
    top--;
    return stack[top+1];
}

void push(int d) {
    top++;
    stack[top] = d;
}

int main() {

    while (scanf("%s", a) != EOF) {
        if (a[0] == '+') {
            int p1 = pop();
            int p2 = pop();
            push(p1 + p2);
        } else if (a[0] == '-') {
            int p1 = pop();
            int p2 = pop();
            push(p2 - p1);
        } else if (a[0] == '*') {
            int p1 = pop();
            int p2 = pop();
            push(p1 * p2);
        } else {
            push(atoi(a));
        }
    }

    cout << pop() << endl;

    return 0;
}
*/

