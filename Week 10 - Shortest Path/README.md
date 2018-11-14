# HELLO PLEASE READ THIS 
---
## - 20C - Dijkstra? -
this problem objectives is to find the shortest path between the vertex 1 and the vertex n. 
we can use tuple, for store the cost, destination and source. we use the source to keep the track. 
we use Dijkstra Algorithm, we need to calculate about the path that cost cheaper but short.

```
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

output 
1, 4, 3, 5

```

The output is 1 , 4, 3, 5 because we want to find the cheapest way, it can be 1,2,5 its true the shortest, but compare with the other answer, 1->4->3->5 cost cheaper.
- 1->2->5 || 2 + 5 = 7
- 1->4->3->5 || 1+3+1 = 5


  Complexity : O(nlogn)
  
[QUESTIONS](http://codeforces.com/problemset/problem/20/C)
X
[SOLUTIONS](http://codeforces.com/contest/20/submission/45708576)

### Thank you :)

___

## - 601 - The Two Routes -
This problem objectives is to search the shortest path which can use from 1 town to n town.
and we can use either bus or train. in order to avoid accidents we have a condition which train and bus must not arrive at the same town (except town n).
```
Given an example :

4 2
1 3
3 4

the output  = 2
4 = number of towns
2 = number of the railways 

in this example , the train can take route 1->3->4 and the bus can take 1->2->4
i use adjcency matrix for this because its "easier", lol

ok so it goes like this :

  1 2 3 4
1 0 0 1 0
2 0 0 0 0
3 1 0 0 1
4 0 0 1 0

1 means the train way, 0 means the bus way. we need to check the element in the matrix first, if its a 1 or 0, if 1 we then simulate the shortest way for train, otherwise 0 then simulate it for bus. 
we can use BFS function to find the shortest path.

```


Complexity : O(n*n)


[QUESTIONS](http://codeforces.com/problemset/problem/601/A)
X
[SOLUTIONS](http://codeforces.com/contest/601/submission/45706248)
