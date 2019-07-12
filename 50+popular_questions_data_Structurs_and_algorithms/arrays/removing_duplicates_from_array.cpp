// challenge : Removing duplicates from the array without creating a new array
// reference geeksforgeeks
// Algorithm for sorted array
// Create an auxiliary array temp[] to store unique elements.
// Traverse input array and one by one copy unique elements of arr[] to temp[]. Also keep track of count of unique elements. Let this count be j.
// Copy j elements from temp[] to arr[] and return j


// Algorithm for unsorted array
// Take a hash map, in which will store all the elements which has appeared before.
// Traverse the array.
// Check if the element is present in the hash map.
// If yes, continue traversing the array.
// Else Print the element.






// The main problem, while dealing with an array is not finding duplicates, it's about removing them. Since an array is a static, fixed length data structure, you can not change its length. This means, 
// deleting an element from an array requires creating a new array and copying content into that array.


#include<iostream>
#include<unordered_map>
using namespace std;


int remove_duplicate_elements_sorted(int arr[],int n)
{
    // if array empty return n
    if  (n==0 || n ==1)
    {
        return n;
    }

    int temp[n];// temporary variable of maximum n elements


    int k = 0;
    for(int i=0;i<n;i++)
    {
        //check if current element equal to next element
        //if not then store this element
        //now store last element regardless of  being duplicate
        if (arr[i]!=arr[i+1])
        {
            temp[k] = arr[i];
            k = k+1;

        }

    
    }



    temp [k] = arr[n-1];
// changing original array
    for(int i =0;i<k;i++)
    {
        arr[i] = temp[i];
    }

    return k;
}

void remove_duplicate_elements_unsorted(int arr[], int n)
{
 // we will use hash map to store elements
 unordered_map<int,bool> mp;


 for (int i =0;i<n;i++)
 {
     if(mp.find(arr[i]) == mp.end())
     {
         cout<<arr[i]<<" ";
     }
    // inserting that element in hash map
     mp[arr[i]] = true;
 }
}

int main()
{
    int a_sorted[] = {1,2,2,3,4,4,5,5};
    int n = sizeof(a_sorted)/sizeof(a_sorted[0]);
    remove_duplicate_elements_sorted(a_sorted,n);


    int a_unsorted[] = {1,3,4,2,3,3,3,4,3,3,4,3,5};

    int m  = sizeof(a_unsorted)/sizeof(a_unsorted[0]);
    remove_duplicate_elements_unsorted(a_unsorted,m);
    return 0;
}
