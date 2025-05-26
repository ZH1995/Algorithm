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
     * @return ListNode类
     */
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* pre = nullptr;
        ListNode* cur = head;
        while (cur != nullptr) {
            // 前驱节点为空 或者 当前节点的val与前驱节点的val不相等，则直接向后继续遍历
            if (pre == nullptr || pre->val != cur->val) {
                pre = cur;
            } else {
                // 若当前节点的val和前驱节点的val相等，则删除当前节点
                pre->next = cur->next;
            }
            cur = cur->next;
        }
        return head;
    }
};