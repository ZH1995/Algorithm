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
        ListNode* cur = head;
        ListNode* pre = nullptr;
        std::set<int> s;
        while (cur != nullptr) {
            if (s.count(cur->val) > 0) {
                // 将前节点指向下一个节点
                pre->next = cur->next;
                // 将当前节点继续向后移动
                cur = cur->next;
            } else {
                s.insert(cur->val); // 插入集合
                pre = cur; // 更新前节点
                cur = cur->next;  // 当前节点向后移动
            }
        }
        return head;
    }
};