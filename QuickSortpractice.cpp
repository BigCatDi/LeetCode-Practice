//# include <iostream>
//从小到大排列
void QuickSort (int left, int right, vector<int>& arr)
{
    while(left>=right)
        return;
    int i,j,base,tmp;
    i=left, j=right;
    base=arr[left]; //取最左边的为基准数    
    while(i<j)
    {
        while(arr[j]>=base && i<j)
            j--;
        while(arr[i]<=base && i<j)
            i++;
        if(i<j)
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }

    //基准数归位
    arr[left]=arr[i];
    base=arr[left];
    QuickSort(left, i-1, arr);
    QuickSort(i+1, right, arr);
}



//从大到小排列
void QuickSort (int left ,int right, vector<int> &arr)
{
    while (left>=right)
        return;
    if(left<0 || right>arr.size()){
        cout<< "error args "
    }
    
    int i,j,base,temp;
    i=left; j=right;
    base=arr[left];
    while(i<j)
    {
        while(arr[j]<=base && i<j)
            j--;
        while(arr[i]>=base && i<j)
            i++;

    }
    arr[left]=arr[i];
    base=arr[left];
    QuickSort(left,i-1,arr);
    QuickSort(i+1,right,arr);
   
}
