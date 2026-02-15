class LRUCache {
public:
    class Node{
        public:
        Node* next;
        Node* prev;
        int key,val;
        Node(int Key,int Val){
            next=prev=nullptr;
            key=Key;
            val=Val;
        }
    };
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    unordered_map<int,Node*> mp;
    int limit;
    void addNode(Node* newNode){
        Node* oldNode=head->next;
        oldNode->prev=newNode;
        newNode->next=oldNode;
        head->next=newNode;
        newNode->prev=head;
    }
    void deleteNode(Node* oldNode){
        if(head->next==tail)return;
        if(oldNode==tail || oldNode==head)return;
        Node* oldPrev=oldNode->prev;
        Node* oldNext=oldNode->next;
        oldPrev->next=oldNext;
        oldNext->prev=oldPrev;
        
    }
    void recentUsed(Node* oldNode){
        deleteNode(oldNode);
        addNode(oldNode);
            

    }
    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
        
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            recentUsed(mp[key]);
            return mp[key]->val;
        }
        return -1;
        
    }
    
    void put(int Key, int Value) {
        if(mp.find(Key)!=mp.end()){
            Node* oldNode=mp[Key];
            mp.erase(Key);
            deleteNode(oldNode);

        }
        if(mp.size()==limit){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);

        }
        Node* newNode=new Node(Key,Value);
        addNode(newNode);
        mp[Key]=newNode;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */