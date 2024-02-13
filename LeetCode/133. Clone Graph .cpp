//
// Created by jlassimohamed on 2/13/24.
//
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
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