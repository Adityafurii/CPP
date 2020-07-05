#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void varSizeArray()
{
    cout<<__func__<<endl;
    int n;
    int q;
    int nEle;
    int var = 0;
    int num=-1;
    int i,j;

    cin>>n>>q;
    int query[q][2];
    vector<int> arr;
    vector<vector<int>> v_arr;
    do
    {
        cin>>nEle;
        for (var = 0; var < nEle; ++var) {
            cin>>num;
            arr.push_back(num);
        }
        v_arr.push_back(arr);
        arr.clear();
        n--;
    }
    while(n>0);
    for (var = 0; var < q; ++var) {
        cin>>query[var][0]>>query[var][1];
    }
    for ( var = 0; var < q; ++var) {
        cout<<v_arr.at(query[var][0]).at(query[var][1])<<endl;

    }
}
