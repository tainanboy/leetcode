#include <iostream>
#include <string>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* insert(ListNode *L, int x){
    ListNode *tmp = new ListNode(x);
    tmp->next = L;
    return tmp;
}

ListNode* del(ListNode *L, int x){
    ListNode *pre = L;
    ListNode *del = L->next;
    if (pre->val ==x){
        delete pre;
        return del;
    }
    while (del!=NULL){
        if (del->val == x){
            pre->next = del->next;
            delete del;
            break;
        }
        pre = del;
        del = del->next;
    }
    return L;
}

void print(ListNode *L){
    ListNode *cur = L;
    if (cur == NULL) {
            cout << "The list is empty." << endl;
            return;
    }
    cout << "LinkedList: ";
        while (cur != NULL) {
            cout << cur->val << ",";
            cur = cur->next;
        }
    cout << endl;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *sum = new ListNode(0);
    ListNode *t = sum;
    int c =0;
    while(c || l1 || l2) {
        c += (l1? l1->val : 0) + (l2? l2->val : 0);
        t->next = new ListNode(c%10);
        c = c/10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
        t = t->next;
    }
    return sum->next;
}

int main(int argc, const char * argv[]) {
    ListNode *l1 = new ListNode(3);
    cout<<l1->val<<endl;
    ListNode *l2 = new ListNode(4);
    l1 = insert(l1,4);
    l1 = insert(l1,2);
    l2 = insert(l2,6);
    l2 = insert(l2,5);
    //l2 = del(l2,5);
    print(l1);
    print(l2);
    print(addTwoNumbers(l1,l2));
    return 0;
}