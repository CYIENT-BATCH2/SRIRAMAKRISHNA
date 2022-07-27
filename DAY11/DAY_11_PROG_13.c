//13. Write a program to do binary search in a sorted array. Program should take input of sorted values and search value. (Make number of elements as configurable value)
//How binary search works is explained below.


#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];                      //declaring the integer varaibale and array with size
printf("Enter number of elements : ");                          //reading the number of elemets from the user
scanf("%d",&n);
printf("Enter %d integers\n", n);                               //reading all the elements of the array and storing it in the array
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find\n");                        //reading the value to be find fr the user and storing it in variable 
scanf("%d", &key);
low = 0;                                                 //taking the first elements as low 
high = n - 1;                                             //last element as high
mid = (low+high)/2;                                 //mid as low plus high by 2
while (low <= high)                                  //the loop run till low is always low compare to high
{
if( key > array[mid])                                 //if key is grater the mid value then it lies on right of mid value we need to increment the value to right
low = mid + 1;
else if (array[mid] == key)                           //if the key value is same as mid then its tha value to print
{
printf("%d found at location %d\n", key, mid+1);      //printing the value and position were it is found
break;
}
else
high = mid - 1;                                         //if value is less then mid value then it lies on the lest side of the mid value 
mid = (low + high)/2;
}
if(low > high)                                          //if low value is more then high value we need to stop the loop
printf("Not found! %d isn't present in the list\n", key);
return 0;
}
