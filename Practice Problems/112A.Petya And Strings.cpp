/* NOTE : What is lexicographically in programming?

In programming, lexicographical order is popularly known as Dictionary order and is used to sort a string array, compare two strings, or sorting array elements. It becomes quite easy to sort elements lexically. */ 

/* A. Petya and Strings

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared. */

#include <iostream>
using namespace std;
 
int main() {
	string S1,S2;
	cin>>S1;
	cin>>S2;
 
	for(int i=0;i<S1.length();i++){
		//convert Uppercase to Lowercase 
		if(S1[i]<97){
			S1[i]+=32;
		}
		if(S2[i]<97){
			S2[i]+=32;
		}
	}
 
	int res=0;
 
	for(int i=0;i<S1.length();i++){
		if(S1[i]>S2[i]){
			res=1;
			break;
		}
		else if(S1[i]<S2[i]){
			res=-1;
			break;
		}
	}
	cout<<res<<endl;
	return 0;
}
