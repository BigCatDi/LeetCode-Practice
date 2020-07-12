#include <iostream>
//二分查找（循环）
bool binary_search(sed:vector<int> &sort array, int target){
    int begin=0;
    int end=array.size()-1;
    while(begin<end){
        int mid=(begin+end)/2;
        if(target==sort array[mid])
            return true;
        else if(target<sort array[mid])
            end=mid-1;
        else if(target>sort array[mid])
            begin=mid+1; 
    }
        return false;
    
}


//二分查找（递归）