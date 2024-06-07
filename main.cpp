#include<iostream>
#include<vector>

using namespace std;

static int N,M;
static vector<int> vec;

void func(int last) {

	if(vec.size()==M){
      for(auto x : vec)cout << x << " ";
      cout << '\n';
      return;
   }

   for(int i=last+1;i<=N;i++){
      vec.push_back(i);
      func(i);
      vec.pop_back();
   }

}

int main() {
   cin >> N >> M;
   func(0);
}
