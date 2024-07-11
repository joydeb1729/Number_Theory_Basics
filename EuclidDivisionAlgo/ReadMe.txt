We have to find the Greatest Common Divisor (gcd) of a and b

Algorithm->



            | a,            if b==0
gcd(a,b) =  |
            | gcd(b, a%b)   otherwise



Link ->  https://www.codechef.com/problems/GCDQ
Alt ->   https://vjudge.net/problem/CodeChef-GCDQ

Q01 -> You are given an array A of integers of size N. 
You will be given Q queries where each query is represented 
by two integers L, R. You have to find the gcd(Greatest Common Divisor) 
of the array after excluding the part from range L to R inclusive (1 Based indexing). 
You are guaranteed that after excluding the part of the array remaining array is non empty.

