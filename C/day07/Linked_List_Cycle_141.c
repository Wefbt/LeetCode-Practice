
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    if (!head) return 0;
    struct ListNode *slow = head, *fast = head;
    while (fast -> next && fast -> next -> next) {
        fast = fast -> next -> next;
        slow = slow -> next;
        if (fast == slow) return 1;
    }

    return 0;
}
