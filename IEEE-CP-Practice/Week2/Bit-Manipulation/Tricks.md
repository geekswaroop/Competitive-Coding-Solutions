Here are some of the important tricks learnt

# 1) New Year's eve

Had to do with max XOR. See, for XOR you need to observe 2 things. It's like fixing a jigsaw. We have 2^p and 2^p-1. XOR of these 2 gives us 2^(p+1)-1. This is a very important observation. Once you get this, problem is trivial.

# 2) Olympiads

Classic brute force problem. Using bitmasks, listing all possible subsets and performing operations on them. Things to observe would be n<=15(20 also will be okay), and the bitmask snippet(included). It's a bit confusing at the beginning, but the crux is that there are total 2^n subsets. So, a loop of 2^n is necessary, so what's inside it? Inside, run a loop from 1 to n( think bits now. N places.., j is the counter) and use ```1<<j``` as the BITMASK. using AND on BITMASK and counter from 1 to total subsets, you get whether the element in the main array makes it into the subset or not!