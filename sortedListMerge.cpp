#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        tail->next = (list1 != nullptr) ? list1 : list2;
        return dummy.next;
    }
};

ListNode* buildList(const vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < nums.size(); i++) {
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n1, n2, x;
    cin >> n1;
    vector<int> v1;
    for (int i = 0; i < n1; i++) {
        cin >> x;
        v1.push_back(x);
    }
    cin >> n2;
    vector<int> v2;
    for (int i = 0; i < n2; i++) {
        cin >> x;
        v2.push_back(x);
    }
    ListNode* list1 = buildList(v1);
    ListNode* list2 = buildList(v2);
    Solution sol;
    ListNode* merged = sol.mergeTwoLists(list1, list2);
    printList(merged);
    return 0;
}
