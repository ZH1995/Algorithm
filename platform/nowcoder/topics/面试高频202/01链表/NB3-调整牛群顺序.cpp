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
     * @param n int整型 
     * @return ListNode类
     */
    ListNode* moveNthToEnd(ListNode* head, int n) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* i = head, *j = head;
        // j指针向后移动n-1个节点
        for (int k = 0; k < n - 1; k ++) {
            j = j->next; 
        }
        ListNode* pre = nullptr; // 记录前驱节点
        while (j->next != nullptr) { // i、j双指针同时向后移动，当j移动到末尾时，i指向的就是待修改的节点
            pre = i;
            i = i->next;
            j = j->next;
        }
        if (pre != nullptr) { 
            j->next = i;
            pre->next = i->next;
            i->next = nullptr;
        } else {
            j->next = i;
            head = i->next; // 若要修改的是第一个节点，则需要修改head指针
            i->next = nullptr;
        }
        return head;
    }
};