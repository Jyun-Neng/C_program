#include <vector>
#include <cstdio>

using namespace std;

int main(){
    vector<int> vec[10];

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i=0; i<10; ++i) 
        vec[i].push_back(a[i]);

    for (int i=0; i<10; ++i)
        for (int j=0; j<vec[i].size(); ++j) printf("%d\t", vec[i][j]);
    printf("\n");

    vector<int> vec2;
    int b[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    for (int i=0; i<10; ++i) 
        vec2.push_back(b[i]);

    for (int i=0; i<vec2.size(); ++i) printf("%d\t", vec2[i]);
    printf("\n");
}
