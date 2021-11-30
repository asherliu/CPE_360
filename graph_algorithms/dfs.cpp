#include <iostream>

int graph_matrix(int ** &graph, int &vertex_count, int &edge_count){


	//We can in fact randomly initiate a graph.
	//In this code, we will use the example graph from our lecture
	//
	//

	vertex_count = 4;
	edge_count = 5;

	graph = new int *[vertex_count];

	for(int i = 0; i < vertex_count; i ++)
		graph[i] = new int[vertex_count];

	for(int i = 0; i < vertex_count; i ++)
		for(int j = 0; j < vertex_count; j ++)
			graph[i][j] = 0;



	graph[0][1] = 1;
	graph[1][0] = 1;
	graph[2][1] = 1;
	graph[2][3] = 1;
	graph[3][1] = 1;


}

int dfs_matrix(int **graph, int vertex_count, int edge_count, int root){

	int *my_stack = new int[edge_count];
	//int *next_queue = new int[vertex_count];

	int stack_count = 0;

	int *status = new int [vertex_count];
	int *parent = new int [vertex_count];
	int *depth = new int [vertex_count];


	for(int i = 0; i < vertex_count; i ++){
		status [i] = -1;
		parent[i] =  -1;
		depth[i] = -1; 
	}

	//Push the root vertex into stack
	my_stack[stack_count++] = root;
	//status[root] = 1;
	depth[root] = 0;


	while(stack_count != 0)
	{

		//Pop out a vertex from stack


		//If this vertex is not visited, we will visit this vertex

			//For all the neighbors of this vertex, we update their parent[], depth[],
			//And put them into the stack.

					//In case j is already added by other frontiers
	}

	//Check the result
	for(int i = 0; ; i ++)
	{
		int level_count = 0;
		std::cout<<"Level "<<i<<": ";
		for(int j = 0; j < vertex_count; j ++)
			if(depth[j] == i)
			{
				std::cout<<j<<" (parent: "<<parent[j]<<" ) ";
				level_count ++;
			}

		if(level_count == 0) break;
		std::cout<<"\n";
	}

}


int main (int args, char **argv)
{
	int **graph;
	int vertex_count;
	int edge_count; 

	int root = 2;

	graph_matrix(graph, vertex_count, edge_count);

	dfs_matrix(graph, vertex_count, edge_count, root);

	return 0;
}

