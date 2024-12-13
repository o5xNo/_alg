#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) {
            return false;
        }

        ListNode* rb = head->next;
        ListNode* nt = head;
        
        int cnt=1,period=1,times=0,round=0;

        while (rb != nt) {
            if (cnt == period) {
                round++;
                nt = rb;
                period *= 2;
                cnt = 0;
            }

            if (rb == NULL) {
                cout<<"ㄟ˙计="<<times<<" 近计="<<round<<endl;
                return false;
            }

            rb = rb->next;
            cnt++; 
            times++;
        }
        cout<<"ㄟ˙计="<<times<<" 近计="<<round<<endl;
        return true;
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

