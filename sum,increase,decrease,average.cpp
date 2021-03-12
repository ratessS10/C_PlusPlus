#include <iostream>

using namespace std;

void doubleSpace(){
cout<<endl<<endl;
}
void aSpace(){
cout<<endl;
}

void showNumInSeries(int *numAddress,int dimension){
    for(int i=0;i<dimension;i++){
        cout<<numAddress[i]<<" ";
    }
    doubleSpace();
}

void increaseNum(int *numAddress,int dimension){

    int quantity;

    cout<<"How many you want increase..."<<endl;
    cin>>quantity;
    cout<<endl;
    for(int i=0;i<dimension;i++){
        numAddress[i] += quantity;
    }
    showNumInSeries(numAddress,4);
}

void decreaseNum(int *numAddress,int dimension){

    int quantity;

    cout<<"How many you want decrease..."<<endl;
    cin>>quantity;
    cout<<endl;
    for(int i=0;i<dimension;i++){
        numAddress[i] -= quantity;
    }
    showNumInSeries(numAddress,4);
}

int sumOfNum(int *numAddress,int dimension){
    int sum=0;

    for(int i=0;i<dimension;i++){
        sum += numAddress[i];
    }
    return sum;
}

void findMax(int *numAddress,int dimension){

    int big=numAddress[0];

    for(int i=1;i<dimension;i++){
        if(big<numAddress[i]){
            big = numAddress[i];
        }
    }

    cout<<"The biggest number in this array:"<<big<<endl;
}

void findMin(int *numAddress,int dimension){

    int small=numAddress[0];

    for(int i=1;i<dimension;i++){
        if(small>numAddress[i]){
            small = numAddress[i];
        }
    }

    cout<<"The lowest number in this array:"<<small<<endl;
}

float averageNum(int *numAddress,int dimension){

    float average = sumOfNum(numAddress,dimension) / float(dimension);
    return average;
}

void sumTwoSeries(int *numAddress1,int *numAddress2,int dimension){
    int sumTwoNum[4];
    cout<<"Sum of two series:";
    for(int i=0;i<dimension;i++){
        sumTwoNum[i]=numAddress1[i] + numAddress2[i];
        cout<<sumTwoNum[i]<<" ";
    }
    aSpace();

}

int main()
{
/* First of all if you want call void functions please delete ' // ' .For instance;
//increaseNum(numbers,4); if you want call this function you have to delete  '//' I mean;

increaseNum(numbers,4);

you have to call this way :)
*/

    int numbers[4];
    cout<<"Please enter 4 numbers"<<endl;
    for(int i=0;i<4;i++){
        cin>>numbers[i];
    }
    int numbers2[]={2,3,5,7};

    aSpace();
    //showNumInSeries(numbers,4);

    //increaseNum(numbers,4);
    //decreaseNum(numbers,4);

    //doubleSpace();
    //cout<<endl<<"Sum Of Numbers:"<<sumOfNum(numbers,4)<<endl;

    //doubleSpace();
    //findMax(numbers,4);
    //findMin(numbers,4);

    //cout<<"Average of Numbers:"<<averageNum(numbers,4)<<endl;

    cout<<"Series two numbers:";
    for(int i=0;i<4;i++){
        cout<<numbers2[i]<<" ";
    }
    doubleSpace();

    sumTwoSeries(numbers,numbers2,4);

    return 0;
}
