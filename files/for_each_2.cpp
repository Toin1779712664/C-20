#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Sum{
    void operator()(int n){sum+=n;}
    int sum={0}; //初始化为0
};
int main(){
    std::vector<int>nums{3,4,2,8,15,267};   
    auto print=[](const int & n){ std::cout<<" "<<n;}; //使用lambda表达式
    std::cout<<"Before:";
    std::for_each(nums.begin(),nums.end(),print);   //通过lambda捕获并输出
    std::cout<<std::endl;
    std::for_each(nums.begin(),nums.end(),[](int &n){n++;});
    // 
    Sum s=for_each(nums.begin(),nums.end(),Sum());
    cout<<"After:";
    for_each(nums.begin(),nums.end(),print);
    cout<<endl;
    cout<<s.sum<<endl;
}