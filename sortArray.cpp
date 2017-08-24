#include <iostream>

using namespace std;


int main() {
    int deret[]={7,9,1,5,5,8,3,2,7,0,4,6};
    int min=0, num= (sizeof(deret)/sizeof(*deret)) ;
    
    for(int i=0;i<num;i++)
    {
        for(int x=i;x<num;x++){
            if (deret[x]<deret[i]){
                min=deret[i];
                deret[i]=deret[x];
                deret[x]=min;
            }
        }
    }

    for(int y=0;y<num;y++){
        cout << deret[y];
    }
    cout << endl;
    return 0;
}