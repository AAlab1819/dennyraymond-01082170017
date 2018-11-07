# HELLO PLEASE READ THIS 
---
## - UVa 10130 - SuperSale -
For this problem we need to decide which person carry which object, with the the condition, we know that everyone can only take one object of each kind during the supersale, and we also know each object ha ve their own price, and every person have different maximum weight the object that they want to carry.

ok so, if example the data is like this 
<pre>

  item 1 have Value = 10 ,  weight =  10
  item 2 have Value = 4 , weught =  4
  item 3 have Value = 3, weight = 6
  assume maximum weight that people can carry is 10
  its better to take item 2 + item 3 = weight = 10, rather than only take 1 item 1 with weight 10. 
  
  so the code, is like :
  1. first we check each each test case with the maximum weight
  2. if weight of the object is less than weight of the next object:
      we find the max
     else:
      we choose that item, because its have the max weight compare with the maximal weight we declare before.
  3. return that object
  
</pre>


  Complexity : O(n^2)
  
[QUESTIONS](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1071)

### Thank you :)

___
