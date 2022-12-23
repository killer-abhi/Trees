#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int treeHeight(TreeNode <int> *root){
    if(root==NULL){
        return 0;
    }
    int height=1;
    for(int i=0;i<root->children.size();i++){
        treeHeight(root->children[i]);
    }
    return height;
}

int main()
{
    TreeNode<int> *root=inputLevelwise();
    cout<<"\n\n Tree Height :: "<<treeHeight(root);
    return(0);
}