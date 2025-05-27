/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head, int k) {
        ListNode* prev = nullptr;
        ListNode* cur = head;
        for (int i = 0; i < k; i++) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param head ListNode类 
     * @param k int整型 
     * @return ListNode类
     */
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k <= 1) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre_group_tail = dummy;
        while (true) {
            ListNode* group_head = pre_group_tail->next;
            ListNode* group_tail = group_head;
            for (int i = 1; i < k && group_tail != nullptr; i ++)
                group_tail = group_tail->next;
            if (group_tail == nullptr) break;
            ListNode* next_group_head = group_tail->next;
            ListNode* reverse_head = reverseList(group_head, k);
            pre_group_tail->next = reverse_head;
            group_head->next = next_group_head;
            pre_group_tail = group_head;
        }
        return dummy->next;
    }
};