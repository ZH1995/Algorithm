/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param head ListNode类 
     * @return bool布尔型
     */
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return false;
        ListNode* i = head, *j = head;
        while (j->next != nullptr && j->next->next != nullptr) {
            i = i->next;
            j = j->next->next;
            if (i->val == j->val) return true;
        }
    
        return false;
    }
};