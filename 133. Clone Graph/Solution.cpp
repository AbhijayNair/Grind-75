/*
// Definition for a Node.
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
*/

class Solution {
public:

    Node* dfs(Node* node, unordered_map<Node*, Node*>& map){
        if (node == nullptr)
            return NULL;
        if (map.count(node)){
            return map[node];
        }
        map[node] = new Node(node->val);
        for(auto n: node->neighbors){
            map[node]->neighbors.push_back(dfs(n, map));
        }
        return map[node];
    }

    Node* cloneGraph(Node* node) {
        if (node == nullptr)
            return NULL;
        
        unordered_map<Node*, Node*> map;
        return dfs(node, map);
    }
};