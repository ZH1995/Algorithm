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
     * @param l1 ListNode类 
     * @param l2 ListNode类 
     * @return ListNode类
     */
    ListNode* mergeEnergyValues(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        // 增加哨兵节点，并将head作为链表的尾指针
        ListNode* dummy = new ListNode(0), *head = dummy;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val >= l2->val) {
                head->next = l1;
                l1 = l1->next;
            } else {
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;
        }
        if (l1 != nullptr) head->next = l1;
        if (l2 != nullptr) head->next = l2;
        return dummy->next;
    }
};