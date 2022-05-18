/*
Input: root = [1,2,3,4,5,6,7]
Output: [1,#,2,3,#,4,5,6,7,#]
Explanation: Given the above perfect binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.
*/

/*
class Solution {
public:
    Node* connect(Node* root) {
    if(!root) return NULL;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
       int size = q.size();
       for(int i=0;i<size;i++)
       {
           Node * temp = q.front();
           q.pop();
           if(i != size-1) temp -> next = q.front();   // Since all value(next) point to NULL so , we just connect i.e  in level 2 {2 3} ->   just 
           
                                                        connect 2 to 3 and 3 is already nuLL 
           
           if(temp -> left) q.push(temp -> left);
           if(temp -> right) q.push(temp -> right);
       }
    }
     return root;   
    }
};

*/