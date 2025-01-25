import java.util.ArrayList;
import java.util.List;

// Definition for a binary tree node
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public List<Integer> preorderTraversal(TreeNode root) { // Function called from main
        List<Integer> l = new ArrayList<>(); // Create a list to store the traversal
        postorder(root, l); // Helper function to populate the list
        return l; // Return the final result list
    }

    private void postorder(TreeNode root, List<Integer> l) { // Helper function for preorder traversal
        if (root == null) { // Base case: if the node is null, return
            return;
        }

        l.add(root.val); // Add the current node's value to the list
        postorder(root.left, l); // Recur on the left subtree
        postorder(root.right, l); // Recur on the right subtree
        l.add(root.val); 
    }
}

public class PostOrder {
    public static void main(String[] args) {
        // Build the tree
        TreeNode root = new TreeNode(1); // Root node
        root.right = new TreeNode(2); // Right child of root
        root.right.left = new TreeNode(3); // Left child of root's right child

        // Call the Solution
        Solution solution = new Solution();
        List<Integer> result = solution.preorderTraversal(root);

        // Print the result
        System.out.println("Postorder Traversal: " + result);
    }
}
