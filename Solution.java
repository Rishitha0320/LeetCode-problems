/**
 * Definition for singly-linked list.
 */
class ListNode {
    int val; // Data stored in the node
    ListNode next; // Pointer to the next node

    // Constructor
    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class Solution {

    // Method to find the intersection node of two linked lists
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        // Step 1: Find the length of both linked lists
        int len1 = 0, len2 = 0;
        ListNode temp1 = headA, temp2 = headB;

        // Calculate the length of list A
        while (temp1 != null) {
            len1++;
            temp1 = temp1.next;
        }

        // Calculate the length of list B
        while (temp2 != null) {
            len2++;
            temp2 = temp2.next;
        }

        // Step 2: Align both lists
        int diff = Math.abs(len1 - len2);
        ListNode curr1 = headA, curr2 = headB;

        // Move the longer list's pointer forward by the difference in lengths
        if (len1 > len2) {
            for (int i = 0; i < diff; i++) {
                curr1 = curr1.next;
            }
        } else {
            for (int i = 0; i < diff; i++) {
                curr2 = curr2.next;
            }
        }

        // Step 3: Traverse both lists simultaneously to find the intersection
        while (curr1 != null && curr2 != null) {
            if (curr1 == curr2) {
                return curr1; // Intersection node found
            }
            curr1 = curr1.next;
            curr2 = curr2.next;
        }

        return null; // No intersection
    }

    // Method to print a linked list (for testing purposes)
    public static void printList(ListNode head) {
        ListNode temp = head;
        while (temp != null) {
            System.out.print(temp.val + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        // Create two linked lists with an intersection
        // List A: 4 -> 1
        //                  \
        //                   8 -> 4 -> 5
        //                  /
        // List B:    5 -> 6 -> 1
        ListNode intersectNode = new ListNode(8);
        intersectNode.next = new ListNode(4);
        intersectNode.next.next = new ListNode(5);

        // Create List A
        ListNode headA = new ListNode(4);
        headA.next = new ListNode(1);
        headA.next.next = intersectNode;

        // Create List B
        ListNode headB = new ListNode(5);
        headB.next = new ListNode(6);
        headB.next.next = new ListNode(1);
        headB.next.next.next = intersectNode;

        // Print both lists
        System.out.println("Linked List A:");
        printList(headA);
        System.out.println("Linked List B:");
        printList(headB);

        // Find and print the intersection node
        Solution solution = new Solution();
        ListNode result = solution.getIntersectionNode(headA, headB);
        if (result != null) {
            System.out.println("Intersection Node: " + result.val);
        } else {
            System.out.println("No Intersection");
        }
    }
}
