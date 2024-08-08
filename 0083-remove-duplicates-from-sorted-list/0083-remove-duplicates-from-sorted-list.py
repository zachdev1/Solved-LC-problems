# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        values = []
        prev = None
        cur = head
        
        while cur != None:
            if cur.val not in values:
                values.append(cur.val)
                prev = cur
            else: 
                prev.next = cur.next
            cur = cur.next
        return head