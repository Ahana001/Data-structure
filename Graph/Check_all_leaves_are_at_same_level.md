# Check if all leaves are at same level
Given a binary tree with n nodes, determine whether all the leaf nodes are at the same level or not. Return true if all leaf nodes are at the same level, and false otherwise.

## Example 1:

Input:
Tree:
    1
   / \
  2   3
Output:
true
Explanation:
The binary tree has a height of 2 and the leaves are at the same level.

## Example 2:

Input:
Tree:
    10
   /  \
 20   30
 /  \
 10   15
Output:
false
Explanation:
The binary tree has a height of 3 and the leaves are not at the same level.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(height of tree)

```c
 /*You are required to complete this method*/
    bool checkUtil(Node *root, int level, int *leaveLevel){
        if(root == NULL) return true;  // if not have rigtht element
        
        if(root->left == NULL && root->right == NULL){ // leave element
            if(*leaveLevel){
                return (*leaveLevel == level);
            }else{
                *leaveLevel = level;
                return true;
            }
        }
        
        return checkUtil(root->left, level+1, leaveLevel) && checkUtil(root->right, level+1, leaveLevel); // check both side of all elements
    }
    bool check(Node *root)
    {
        int leaveLevel = 0;
        
        return checkUtil(root,0,&leaveLevel); // sending reference of leaveLevel so all recursion call gets updated value of leaveLevel
    }
```
# without recursion with queue

```c
bool check(Node *root)
    {
        queue<pair<Node *,int>> q;
        int leaveLevel = -1;
        q.push({root,0});
        
        while(!q.empty()){
            Node* node = q.front().first;
            int level = q.front().second;
            q.pop();
            if(node->left == NULL && node->right == NULL){
                if(leaveLevel == -1){
                    leaveLevel = level;
                }else if(leaveLevel != level){
                    return false;
                }
            }

            if(node->left) q.push({node->left, level+1});
            if(node->right) q.push({node->right, level+1});
        }
        return true;
    }
```
