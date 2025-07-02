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
    ListNode* deleteNodes(ListNode* head) {
        ListNode* oriHead = head; // 暂存头节点
        ListNode* next = head->next; // 保存下一个节点
        ListNode* nextnext = next->next; // 保存下下个节点
        while (next != nullptr && nextnext != nullptr) {
            if (next->val > nextnext->val && next->val > head->val) {
                // 删除峰值
                head->next = nextnext;
            }
            // 指针向后移动
            head = head->next;
            next = head->next;
            nextnext = next->next;
        }
        return oriHead;
    }
};