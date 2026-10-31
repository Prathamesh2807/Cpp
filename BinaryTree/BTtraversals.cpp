#include <iostream>
#include <vector>
using namespace std ;

class Node{
    public : 
    int data ;
    Node* left ;
    Node* right ;

    Node(int val){
        this->data = val ;
        left = right = NULL ;
    };
};
static int index = -1 ;
Node* buildTree(vector<int> preorder){

    index++ ;

    if(preorder[index] == -1){return NULL;}

    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root ;

}

// preorder transversal 
void preOrder(Node* root){


    if(root == NULL){return ;}
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);


}

//inorder traversal left root right 

void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data <<" ";
    inorder(root->right);
}


/// postorder left right root 

void postorder(Node* root){
    if(root == NULL){return ;}

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1} ;
    

    Node* root = buildTree(preorder);
    cout<< root->data << endl ;
    cout<< root->right->right->data <<endl ;


    preOrder(root);
    cout<<endl ;

    inorder(root);
    cout<<endl ;

    postorder(root);
    cout<<endl;


    return 0;
}