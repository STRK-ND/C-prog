#include <iostream>
using namespace std;
 
int main(void) {
	
	int numArray[4];   // Define an array of four integers
        int i;
	// Get inputs for the array elements
	for (i=0; i<4; i++) {
    	cin >> numArray[i];
	}
    
	int sum = 0;
	// the logic to add these integers 
	
	for(i=0;i<4;i++){
	    sum +=numArray[i];
	}
 
 
 
    
	
	cout << sum << endl;// Print the sum
    
	return 0;
}