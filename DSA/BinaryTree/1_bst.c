 /*Name:N.Yashwanth 
   ID:B171561
   Question:Binary search tree operations*/

#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *right;
    int ele;
    struct Node *left;
};
struct Node * insert(struct Node *root,int val){
     struct Node *temp,*nn;
     if(root == NULL){
        root=(struct Node *)malloc(sizeof(struct Node));
        root->left=NULL;
        root->ele=val;
        root->right=NULL;}
     else{
       nn=(struct Node *)malloc(sizeof(struct Node));
       nn->left=NULL;
       nn->ele=val;
       nn->right=NULL;
       temp=root;
       while(1){
          if(temp->ele > val){
             if(temp->left != NULL){
                  temp = temp->left; }
            else{
                 temp->left = nn;
                 break;}     }
          else{
             if(temp->right != NULL){
                   temp=temp->right;}
             else{
                   temp->right=nn;
                   break;}    
              } 
        }
   }
  return root; 
}
struct Node * findparent(struct Node *temp1,struct Node *temp){
    if(temp1->left != temp && temp1->right != temp){
          findparent(temp1->left,temp); 
          findparent(temp1->right,temp); 
              }
       return temp1; 
}
struct Node * search(struct Node *root,int val){
          struct Node *temp;
          int f=0,c=1;
          temp = root;
             while(1){
               if (temp->ele == val){
                     printf("element found at %dth node\n",c);
                     f = 1;
                     break;}
               if(temp->ele > val){
                     if(temp->left != NULL){
                           temp=temp->left;}
                      else{
                            break;}   }
               else{
                     if(temp->right != NULL){
                          temp=temp->right;}
                      else{
                            break;}
                   }
                 c++;
                      }
             if(f==1){
                  return temp;}
             else{
                  printf("__element not found__\n");
                  return NULL;}
}

struct Node * delete(struct Node *root, int val){
      struct Node *temp1,*temp,*parent;
      temp = search(root,val);
      if(temp != NULL){
     //node with no leaves
          if(temp->right == NULL && temp->left == NULL){
              //only root element in the tree
                if(temp == root){
                      root = NULL; }
               else{
               //other nodes
               parent = findparent(root,temp);
               if(parent->left == temp){
                   parent->left = NULL; 
                    }
               else{
                   parent->right = NULL;
                   }  
                    }          
               }
     //node with one leaf
       else if((temp->left != NULL && temp->right == NULL) || (temp->left == NULL && temp->right != NULL)){
           //root with one leaf
           if(temp == root && temp->right == NULL){
                    root->ele = temp->left->ele; 
                     root->left = NULL; }
           else if(temp == root && temp->left == NULL){
                    root->ele = temp->right->ele; 
                     root->right = NULL; }
           else{
          // other nodes with one leaf
           parent = findparent(root,temp);
           if(parent->left == temp){
                  if(temp->left == NULL){
                           parent->left = temp->right;
                           }
                 else if(temp->right == NULL){
                          parent->left = temp->left;
                             }
                                    }
          if(parent->right == temp){
              if(temp->left == NULL){
                          parent->right = temp->right;
                         }
              else if(temp->right == NULL){
                         parent->right = temp->left;
                             }
                                    }
              }
                            }
  //node with two leaves
          else{
         //to delete element right side of root
             if(val > root->ele){
              parent = temp;
              temp1 = temp->left;
              while(temp1->left != NULL){
                     parent = temp1;
                     temp1 = temp1->left;
                         }//while
               temp->ele = temp1->ele;
               parent->left = temp1->left;
                 }
           // to delete element left side of root
              else if(val < root->ele){
              parent = temp;
              temp1 = temp->right;
              while(temp1->right != NULL){
                     parent = temp1;
                     temp1 = temp1->right;
                       }//while
               temp->ele = temp1->ele;
               parent->right = temp1->right;
                 }
          //to delete root element
              else{
                parent = temp;
                temp1 = temp->right;
                while(temp1->left != NULL){
                     parent = temp1;
                     temp1 = temp1->left; 
                        }//while
                temp->ele = temp1->ele;
                if(parent != temp){
                parent->left = temp1->left; }
                 else{
                    parent->right = temp1->right; }
                    }
                  }
         } return root;
}

void display(struct Node *root){
      if(root != NULL){
          printf("%d ",root->ele);
          display(root->left); 
          display(root->right);
          }
}

void preorder(struct Node *root) {
	if(root != NULL) {
		printf("%d\t", root->ele);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct Node *root) {
	if(root != NULL) {
		inorder(root->left);
		printf("%d\t", root->ele);
		inorder(root->right);
	}
}

void postorder(struct Node *root) {
	if(root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%d\t", root->ele);
	}
}
void main(){
    int option,val;
    struct Node *root;
    root = NULL;
    do{
     printf("enter the option\n\t1.insert\n\t2.delete\n\t3.display\n\t4.pre-order traversal\n\t5.in-order traversal\n\t6.post-order traversal\n\t7.exit\n >>>>>");
     scanf("%d",&option);
     switch(option){
         case 1:{
             printf("\nenter the element to insert: ");
             scanf("%d",&val);
             root=insert(root,val);
             break;}
         case 2:{
             printf("enter the element to delete: ");
             scanf("%d",&val);
             root=delete(root,val);
             break;}
         case 3:{
             if(root == NULL){
                printf("__tree is empty__\n"); }
             display(root);
             printf("\n");
             break;}
         case 4:{
			 preorder(root);
			 break;
		 }
		 case 5:{
			inorder(root);
			 break;
		 }
			 
		 case 6:{
		 	postorder(root);
			 break;
		 }
		 case 7:{
             printf("__exiting from tree__\n");
             break;}
			 
             }
      }while(option != 7);
}
