#include<bits/stdc++.h>
using namespacestd;

int main() {
	//basically hashing is use to reduce the time compleity of searching
	//linear - O(n) -> linear search
	//binary - O(log n) -> binary search
	//hashing techniwue <logn - >tries to search the key in less than logn time
	//just make the no. of indexes of which the highest no, is there in array , make a hash table and search the value
	//{1,2,66,21,200} -> {1,2,3,....21,...,66,...,200}, here search just the index, and index searching means arr[66] = 66, so it take O(1) time
	//lots of spcae is requied and wasted
	//Use the hashFunction, that function gives index and we're storing index given by hash fucntion ->h(x) =x;
	// mappinf function like one to one and many to one, space rewuired is huge
	//Use hash function h(x) = x%10 -> gives value from  0 to 9
	//when two keys are mapped in same function - > collision happens -> drawback of moulus function - > many to one function
	//open hashing - chaining
	// for inserting - > when there is a collision, then make a new node there and put the next element there usind linked list from 0 to 9 as h(x) = x%10
	//for searching -> if key = 12; do h(x)=x%10, come to 2 and see 12 is there or not, search successful
	//as they are inserting elements making the nodes -> they are inserting inn the chain
	//Loading factor (Lambda) = n/size;
	//for average succesful search - >tc: 1+(lambda/2)
	//for average unsuccesful search - >tc: 1+lambda
	//select a proper hash function such that atleast at major extent the keys are uniformaly distributed


	// closed hashing - open addressing - >1. linear probing, 2.Quadratic probing, 3. Double Hashing
	// 1. linear - > h`(x) = (h(x) + f(i))%10 where f(i)=i, i=0,1,2,3....
	// 2. quadratic -> h`(x) = (h(x) + f(i))%10 where f(i)=i**2, i=0,1,2,3....
	// 3. Double Hashing -> h`(x) = (h1(x) + i*h2(x))%10 where f(i)=i**2, i=0,1,2,3....
	return 0;
}