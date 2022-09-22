#include <bits/stdc++.h>
using namespace std;



int main()
{
    string ex;
    cin>>ex;

    // bool mem[26];
    // for(int i=0;i<26;i++){
    //     mem[i]=false;
    // }
    // int count=0;
    // for(int i=0;i<ex.length();i++){
    //     // cout<<ex[i]<<" "<<int(ex[i])<<" "<<ex[i]-97<<" "<<ex[i]-'a'<<endl;
    //     int mappedIndex=ex[i]-97;
    //     if(mem[mappedIndex]==false){
    //         count++;
    //         mem[mappedIndex]=true;
    //         // cout<<"Hurray found new char: "<<ex[i]<<endl;
    //     }else{
    //         // cout<<"Not new: "<<ex[i]<<endl;
    //     }
    // }

    int elementCount[26];
    for(int i=0;i<26;i++){
        elementCount[i]=0;
    }
    for(int i=0;i<ex.length();i++){
        // cout<<ex[i]<<" "<<int(ex[i])<<" "<<ex[i]-9<<" "<<ex[i]-'a'<<endl;
        int mappedIndex=ex[i]-97;
        //cout<<mappedIndex<<endl;
        elementCount[mappedIndex]++;
    }
    for(int i=0;i<ex.length();i++){
        int mappedIndex=ex[i]-97;
        cout<<ex[i]<<" "<<elementCount[mappedIndex]<<endl;
    }
    

    // if (count % 2 != 0)
    // {
    //     cout << "IGNORE HIM" << endl;
    // }
    // else
    // {
    //     cout <<"CHAT WITH HER!"<< endl;
    // }

    
}