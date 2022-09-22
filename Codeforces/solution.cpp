#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=48;
    cout<<char('0'+2)<<endl;
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

    int elementCount[10];
    for(int i=0;i<10;i++){
        elementCount[i]=0;
    }
    for(int i=0;i<ex.length();i++){
        // cout<<ex[i]<<" "<<int(ex[i])<<" "<<ex[i]-9<<" "<<ex[i]-'a'<<endl;
        int mappedIndex=ex[i]-'0';
        //cout<<mappedIndex<<endl;
        elementCount[mappedIndex]++;
    }
    for(int i=0;i<ex.length();i++){
        int mappedIndex=ex[i]-48;
        cout<<ex[i]<<" "<<elementCount[mappedIndex]<<endl;
    }
    cout<<"--"<<endl;
    for(int i=0;i<10;i++){
        cout<<i<<"->"<<elementCount[i]<<endl;
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