#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

struct compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq;
    }
};

void printCodes(Node* root, string str) {
    if(!root) return;
    if(root->ch != '$')
        cout << root->ch << ": " << str << "\n";
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

void huffmanCoding(string text) {
    unordered_map<char, int> freq;
    for(char ch : text) freq[ch]++;

    priority_queue<Node*, vector<Node*>, compare> pq;
    for(auto pair : freq)
        pq.push(new Node(pair.first, pair.second));

    while(pq.size() != 1) {
        Node *left = pq.top(); pq.pop();
        Node *right = pq.top(); pq.pop();
        Node *top = new Node('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        pq.push(top);
    }

    printCodes(pq.top(), "");
}

int main() {
    cout << "<<Lab-3: Huffman Coding>>\n\nCompiled By Suman Bisunkhe\n\n";
    string text = "HUFFMAN";
    huffmanCoding(text);
    cout<<endl;
    return 0;
}
