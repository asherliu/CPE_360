#include <iostream>
#include <stdlib.h>

struct node{
	int val;
	struct node *left;
	struct node *right;
};

struct node *
build_binary_search_tree(int *array, int array_size)
{
	//Scan through the array and allocate "struct node" to contain each 
	//- element from this *array

	struct node *root = new struct node;
	root->val = array[0];
	root->left = NULL;
	root->right = NULL;

	for(int i = 1; i < array_size; i ++)
	{
		//- 30 points
		//allocate a struct node variable
		//store array[i] into this variable

		//- 30 points
		//descend the tree from root by 
		//	- going left if this array[i] is smaller than the node
		//	- going right if this array[i] is larger than the node
		//Continue descending until you cannot, and that's the spot for you to store array[i]
		//	
		//tmp = root;
		//while (true){
		//
		// //We get the spot (left of tmp) to insert
		//if((array[i] < tmp->val) && (tmp->left == NULL))
		// insert the array[i]'s value;
		// break;
		//
		// //We get the spot (rigth of tmp) to insert
		//if((array[i] > tmp->val) && (tmp->right == NULL))
		// insert the array[i]'s value;
		//break;
		//
		// if (array[i] < tmp->val)
		// tmp = tmp->left;
		//
		// if (array[i] > tmp->val)
		// tmp = tmp->right;
		//}
	


		//- if the entire program builds a correct BST, - 40 points
	}
}	

int main(int args, char **argv){
	std::cout<<"/path/to/exe array_size\n";

	if(args<=1){
	
		std::cout<<"Wrong input # of arguments\n";
		exit;
	}

	int array_size = atoi(argv[1]);

	int *array = new int[array_size];

	//This array should contain no duplicates
	for(int i = 0; i < array_size; i ++)
	{
		int num = rand()%100;
		for(int j = 0; j < i; j ++)
			if(num == array[j])
			{
				i--;
				break;
			}
		array[i] = num;
	}

	//Generate the binary search tree
	struct node *root = build_binary_search_tree(array, array_size);	
}