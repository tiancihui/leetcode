#include<string>
#include<iostream>

int findMaxChildLength(std::string s){
	if (s.length() == 1 || s.length() == 0) {
		return   s.length();
	}

	int max_length = 1;

	std::string  child;
	child.append(s,0,1);
		for( int i =  1; i< s.length(); i++) {
			int postion = child.find(s[i]);
			if (postion !=  std::string::npos) {
				if (max_length < child.length()){
					max_length = child.length();
					child = s[i];
				}
			}else{
				child.append(s, i, 1);
			}
		}
	return  max_length;
}

int main(){
   std::cout << findMaxChildLength("pwwkew") << std::endl;

   return 0;
}
