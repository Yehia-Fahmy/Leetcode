#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        std::cout << "Hello World" << std::endl;
        return nullptr;
    }
};
int main(int argc, char const *argv[])
{
    ListNode *first_head = nullptr;
    ListNode *second_head = nullptr;
    Solution our_solution;
    our_solution.mergeTwoLists(first_head, second_head);
    return 0;
}

void print_list(ListNode *head);
void print_list(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl
              << "-- End of List -- " << std::endl;
}