Problem Link : https://codeforces.com/problemset/problem/1901/A
Problem Name : A. Line Trip 1901/A

🧠 Solution Logic

Input:

Number of test cases t

For each test case:

n → number of gas stations

x → total length of the road

arr[i] → distance of each gas station from the start

Idea:

The traveler moves from 0 → arr[0] → arr[1] → ... → arr[n-1] → x.

Then returns from x → 0.

The “maximum jump” or segment distance represents how far the traveler must go without refueling.

Steps:

Compute the distance between the start and the first station:
arr[0]

Compute all consecutive station distances:
arr[i] - arr[i - 1]

Compute the distance from the last station to the end (x), considering the return trip:
2 * (x - arr[n - 1])

The answer is the maximum of all these values.

Return the result for each test case.


⏱️Complexity:

Time: O(n) per test case

Space: O(n)



-----------------------------------------------------------------------------------------------------

MIT License
Copyright (c) 2025
Permission is hereby granted, free of charge, to any person obtaining a copy of this software...
