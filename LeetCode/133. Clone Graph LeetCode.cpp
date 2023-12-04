class Solution {
public:
        
    void dfs(Node* node, Node* m[]){
           
        m[node->val] = new Node(node->val);
     
        for(auto curr : node->neighbors)
        {
            if(m[curr->val] == NULL)
                dfs(curr, m);    
            m[node->val]->neighbors.push_back(m[curr->val]);
        }
    }
    
    Node* cloneGraph(Node* node) {
        Node* m[101] = {};
        if(!node)
            return NULL;
        
        /*for(int i = 0 ; i <= 100; i++)
            map[i] = NULL;*/

        dfs(node, m);
        return m[1];
        
    }
    
};
