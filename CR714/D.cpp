#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int *st;
// A utility function to get minimum of two numbers 
int minVal(int x, int y) { return (x < y)? x: y; } 
  
// A utility function to get the 
// middle index from corner indexes. 
int getMid(int s, int e) { return s + (e -s)/2; } 
  
/* A recursive function to get the
minimum value in a given range 
of array indexes. The following 
are parameters for this function. 
  
    st --> Pointer to segment tree 
    index --> Index of current node in the 
           segment tree. Initially 0 is 
           passed as root is always at index 0 
    ss & se --> Starting and ending indexes 
                of the segment represented 
                by current node, i.e., st[index] 
    qs & qe --> Starting and ending indexes of query range */
int RMQUtil(int *st, int ss, int se, int qs, int qe, int index) 
{ 
    // If segment of this node is a part 
    // of given range, then return 
    // the min of the segment 
    if (qs <= ss && qe >= se) 
        return st[index]; 
  
    // If segment of this node
    // is outside the given range 
    if (se < qs || ss > qe) 
        return INT_MAX; 
  
    // If a part of this segment
    // overlaps with the given range 
    int mid = getMid(ss, se); 
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1), 
                RMQUtil(st, mid+1, se, qs, qe, 2*index+2)); 
} 
  
// Return minimum of elements in range
// from index qs (query start) to 
// qe (query end). It mainly uses RMQUtil() 
int RMQ(int *st, int n, int qs, int qe) 
{ 
    // Check for erroneous input values 
    if (qs < 0 || qe > n-1 || qs > qe) 
    { 
        cout<<"Invalid Input"; 
        return -1; 
    } 
  
    return RMQUtil(st, 0, n-1, qs, qe, 0); 
} 
  
// A recursive function that constructs
// Segment Tree for array[ss..se]. 
// si is index of current node in segment tree st 
int constructSTUtil(int arr[], int ss, int se,
                                int *st, int si) 
{ 
    // If there is one element in array,
    // store it in current node of 
    // segment tree and return 
    if (ss == se) 
    { 
        st[si] = arr[ss]; 
        return arr[ss]; 
    } 
  
    // If there are more than one elements, 
    // then recur for left and right subtrees 
    // and store the minimum of two values in this node 
    int mid = getMid(ss, se); 
    st[si] = minVal(constructSTUtil(arr, ss, mid, st, si*2+1), 
                    constructSTUtil(arr, mid+1, se, st, si*2+2)); 
    return st[si]; 
} 
  
/* Function to construct segment tree 
from given array. This function allocates
memory for segment tree and calls constructSTUtil() to 
fill the allocated memory */
int *constructST(int arr[], int n) 
{ 
    // Allocate memory for segment tree 
  
    //Height of segment tree 
    int x = (int)(ceil(log2(n))); 
  
    // Maximum size of segment tree 
    int max_size = 2*(int)pow(2, x) - 1; 
  
    int *st = new int[max_size]; 
  
    // Fill the allocated memory st 
    constructSTUtil(arr, 0, n-1, st, 0); 
  
    // Return the constructed segment tree 
    return st; 
} 
  
  
/*  A recursive function to get gcd of given
    range of array indexes. The following are parameters for
    this function.
  
    st    --> Pointer to segment tree
    si --> Index of current node in the segment tree. Initially
               0 is passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment
                 represented by current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
int findGcd(int ss, int se, int qs, int qe, int si)
{
    if (ss>qe || se < qs)
        return 0;
    if (qs<=ss && qe>=se)
        return st[si];
    int mid = ss+(se-ss)/2;
    return __gcd(findGcd(ss, mid, qs, qe, si*2+1),
               findGcd(mid+1, se, qs, qe, si*2+2));
}
  
//Finding The gcd of given Range
int findRangeGcd(int ss, int se, int arr[],int n)
{
    if (ss<0 || se > n-1 || ss>se)
    {
        cout << "Invalid Arguments" << "\n";
        return -1;
    }
    return findGcd(0, n-1, ss, se, 0);
}
  
// A recursive function that constructs Segment Tree for
// array[ss..se]. si is index of current node in segment
// tree st
int constructST1(int arr[], int ss, int se, int si)
{
    if (ss==se)
    {
        st[si] = arr[ss];
        return st[si];
    }
    int mid = ss+(se-ss)/2;
    st[si] = __gcd(constructST1(arr, ss, mid, si*2+1),
                 constructST1(arr, mid+1, se, si*2+2));
    return st[si];
}
  
/* Function to construct segment tree from given array.
   This function allocates memory for segment tree and
   calls constructSTUtil() to fill the allocated memory */
int *constructSegmentTree(int arr[], int n)
{
   int height = (int)(ceil(log2(n)));
   int size = 2*(int)pow(2, height)-1;
   st = new int[size];
   constructST1(arr, 0, n-1, 0);
   return st;
}

void subMain()	{
    
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    constructSegmentTree(a, n);
    int *st1 = constructST(a, n); 
    

}

int main()	{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	{
        subMain();
        cout << "\n";
    }
    return 0;
}