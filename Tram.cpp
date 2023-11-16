#include <iostream>
#include<cmath>
using namespace std;

int main() {
	 int n;
	 int capacity=0;
	 int stillnow=0;
	
     cin >> n;
	 for(int i=0;i<n;i++)
     {
        int a,b;
        cin >> a;
        cin >> b;       
        stillnow -= a;
        stillnow += b;
        capacity = max(capacity,stillnow);
	 }
	 cout << capacity;

	return 0;
}