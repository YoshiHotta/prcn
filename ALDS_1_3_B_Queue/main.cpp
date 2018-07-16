/*
#include <iostream>

using namespace std;

int head, tail;

typedef struct task {
    int rest;
    char name[10];
} Task;

Task tasks[100000];
int n, q;

void push(Task t) {
    tail = (tail + 1) % n;
    tasks[tail] = t;
};

Task pop() {
    Task t = tasks[head];
    head = (head + 1) % n;
    return t;
}

int main() {

    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> tasks[i].name >> tasks[i].rest;
    }

    head = 0;
    tail = n-1;
    int elapsed = 0;
    int complete = 0;

    while (1) {
        Task t = pop();
        if (t.rest - q > 0) {
            t.rest -= q;
            push(t);
            elapsed += q;
        } else {
            elapsed += t.rest;
            cout << t.name << " " << elapsed << endl;
            complete++;
            if(complete == n) {
                break;
            }
        }
    }

    return 0;
}*/
