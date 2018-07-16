//#include <iostream>
//using namespace std;
//
//struct node {
//    node *next, *prev;
//    int val;
//} ;
//
//node nil1;
//node nil2;
//
//void insert(int i){
//    node *n;
//    node *nex;
//    nex = nil1.next;
//    n = new node;
//
//    nil1.next = n;
//    n->prev = &nil1;
//    n->next = nex;
//    nex->prev = n;
//    n->val = i;
//}
//
//void deleteNode(int i){
//    node *nowa = &nil1;
//
//    while (nowa != &nil2 && nowa->val != i){
//        nowa = (*nowa).next;
//    }
//    nowa->prev->next = nowa->next;
//    nowa->next->prev = nowa->prev;
//}
//
//
//int main() {
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        char cmd[100];
//        int val;
//        cin >> cmd >> val ;
//        if(strcmp(cmd, "insert") == 0) {
//            insert(val);
//        } else if (strcmp(cmd, "delete") == 0) {
//            deleteNode(val);
//        }
//    }
//
//    node *nowa;
//    nowa = nil1.next;
//
//    while(nowa != &nil2) {
//        cout << nowa->val;
//        nowa++;
//    }
//
//    return 0;
//}
