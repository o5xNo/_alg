#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head || !head->next) return false;
        
        ListNode* ot = head;
        ListNode* rb = head;

        int times=0,round=0;
        
        while (rb && rb->next) {
            ot = ot->next;
            rb = rb->next->next;
            times+=2;
            round++;
            
            if (ot == rb) {
                cout<<"ㄟ˙计="<<times<<" 近计="<<round<<endl;
                return true;
            }
        }
        cout<<"ㄟ˙计="<<times<<" 近计="<<round<<endl;
        return false;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next->next->next->next = head;
    
    Solution solution;
    if (solution.hasCycle(head)) {
        cout << "Τ癹伴" << endl;
    } else {
        cout << "⊿Τ癹伴" << endl;
    }

    return 0;
}
