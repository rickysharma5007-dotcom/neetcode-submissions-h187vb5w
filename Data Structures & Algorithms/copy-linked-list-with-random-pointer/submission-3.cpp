/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    if (!head) return nullptr;
    std::unordered_map<Node*,Node*> mp;
    Node* temp=head;
    while(temp!=nullptr)
    {
        mp[temp]=new Node(temp->val);
        temp=temp->next;
    }
    temp=head;
    Node*copy=nullptr;
    while(temp!=nullptr)
    {
        copy= mp[temp];
        copy->next=mp[temp->next];
        copy->random=mp[temp->random];
        temp=temp->next;

    }
        return mp[head];
        
    }
};
