#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int A; //Alice's height
	int B; //Bob's height
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>A >>B;
	    
	    if(A > B)
	        cout <<"A" <<endl;
	        
	    else
	        cout <<"B" <<endl;
	        
	}
	
	return 0;
}
