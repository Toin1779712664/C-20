#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// for_each函数在algorithm头文件中
int main(){
	vector<int>vec={1,2,3,4,5,6,7,8};
	auto out=[](const int & n){cout<<" "<<n;};
	for_each(vec.begin(),vec.end(),out);
	cout<<endl;
	return 0;
}