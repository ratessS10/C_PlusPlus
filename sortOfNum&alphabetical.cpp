#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void inSpace(){
cout<<endl<<endl;
}

void alphabeticalQueue(){
    string series;

    cout<<"Please enter a word(without capslock)..."<<endl;
    cin>>series;

    //we used ready function in c++
    sort(series.begin(),series.end());
    cout<<series<<endl;

    /*
    int counter=0,temp;
    counter = series.length();

    //length useful code
    int i=0,x=0;

    while(i<counter-1){
        x=i+1;
            while(x < counter){
                if(series[i] > series[x]){
                    temp = series[i];
                    series[i] = series[x];
                    series[x] = temp;
                }
                x++;
            }
            i++;
    }
    cout<<series<<endl;
    */

}
void numberQueue(){
    //int numbers[]={1,5,2,-2,-5,12,65,-4};

    int numbers[3];
    cout<<endl<<"Please enter 10 different numbers for sort of num..."<<endl;

    for(int i=0;i<3;i++){
        cin>>numbers[i];
    }

    int sortNum=sizeof(numbers)/sizeof(int);
    sort(numbers,numbers+sortNum);

    cout<<"Sort of numbers(from lowest to bigger)"<<endl;
    for(int i=0;i<sortNum;i++){
        cout<<numbers[i]<<"<";
    }

}

int main()
{
    alphabeticalQueue();
    inSpace();
    numberQueue();
    inSpace();

    return 0;
}
