#include <queue>
#include <iostream>

int main(){

	std::queue<int>  data_queue;
	std::vector<int>  input;
	input.push_back(1);
	input.push_back(3);
	input.push_back(2);
	input.push_back(5);
	input.push_back(6);

	data_queue.push(input[i])
		for(int I=1;  i< input.size();  I++) {
			int data = data_queue.peek();
			if data >   input[i] {
				data_queue.push( input[i] );
			}else{
				int data = data_queue.peek();
				while(data <  input[i] ){
					std::cout <<  I << std::endl;
					data_queue.pop();
				}
				data_queue.push( input[i] );
			}
		}

	return 0
}
