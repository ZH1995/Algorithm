/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* pre = nullptr;
        while (head != nullptr) {
            ListNode* newnode = new ListNode(head->val); // 创建新节点
            newnode->next = pre; // 新节点指向pre
            pre = newnode;      // pre更新为当前新节点
            head = head->next;  // 继续翻转下一个节点
        }
        return pre;
    }

    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param head ListNode类 
     * @return bool布尔型
     */
    bool isPalindrome(ListNode* head) {
        ListNode* reverseHead = reverse(head);
        while (reverseHead != nullptr && head != nullptr) {
            if (reverseHead->val != head->val) return false;
            reverseHead = reverseHead->next;
            head = head->next;
        }
        return true;
    }
};