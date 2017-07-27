/*
	'[' is home key, and ']' is end key.

	skill: just need to care home key.
*/
#include <fstream>   
#include <iostream>  
#include <string>
using namespace std;
int main()
{
	
	ifstream in("testcase.txt");  
    ofstream out("out.txt");  

    string line, out_str, tmp;
    int home, after_home, i;
    if (in){
    	while(getline(in, line)){
    		out_str.clear();
    		tmp.clear();
    		const char *chr = line.c_str();
    		i = 0;
    		home = 0;	// first time to press home key.
    		after_home = 0;	// after press home key.

    	    while(chr[i] != '\0'){	// each line.
    	   		if (chr[i] == '['){	// press home key.
    	   			if(after_home)	// after press home key.
    	   				out_str = tmp + out_str;	// add to output string.
    	   			else
    	   				out_str += tmp;	// add to output string.
    	   			tmp.clear();
    	   			i++;
    	   			home = 1;	// set home key.
    	   			after_home = 0;
    	   			continue;
    	   		}
    	   		else if (chr[i] == ']'){	// press end key.
    	   			if (after_home)	// after press home key.
    	   				out_str = tmp + out_str;	// add to output string.
    	   			else
    	   				out_str += tmp;	// add to output string.
    	   			tmp.clear();
    	   			i++;
    	   			after_home = 0;	// clear after_home key.
    	   			home = 0;	// clear home key.
    	   			continue;
    	   		}
    	   		if (home){	// press home key.
    	   			if (after_home)
    	   				tmp += chr[i];	// add to temp string.
    	   			else{
    	   				tmp = chr[i] + tmp;	// add to temp string.
    	   				after_home = 1;	// set after_home key.
    	   			}
    	   		}
    	   		else	// do not press home key.
    	   			tmp += chr[i];	// add to temp string.
    	   		i++;
    	   	}
    	   	if(home)
    	   		out_str = tmp + out_str;
    	   	else
    	   		out_str += tmp;
    	   	out << out_str << endl;
		}
    }
}
