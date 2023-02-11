#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// for_each函数在algorithm头文件中
int main(){
	vector<int>vec={1,2,3,4,5,6,7,8};
	auto out=[](const int & n){cout<<" "<<n;}; // 捕获引用
	for_each(vec.begin(),vec.end(),out);
	/*
		for_each()函数接收三个参数，其中前两个参数接收区间，第三个参数则接收对应的函数调用
		函数示例如下：
		for_each(InputIt first,InputIt last,UnaryFunction f){
			for(;first!=last;++first){
				f(*first);
			}
			return f;
		}
	*/
	cout<<endl;
	return 0;
}