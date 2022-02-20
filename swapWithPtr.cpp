#include <iostream>

using namespace std;

void swap(int*x, int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void writeSwap(){
    int x, y;
    cout<<"Please enter X and Y for change their Location(PTR)"<<endl;
    cin >> x >> y;
    swap(&x, &y);
    
    cout<<"\nI'm just wondering why you change numbers why you didn't declare before :)\nBut you don't need to work that I did for you dude...\n\n";
    
    cout<<"Your current x value is;"<<x<<endl
    <<"and also your current y value is"<<y;
}

int main()
{
    writeSwap();  
  
    return 0;
}
