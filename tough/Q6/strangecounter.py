#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the strangeCounter function below.
def strangeCounter(t):
    i=1
    j,k=3,3  #variable which keep track on value
    n =0
    m =0
    while 1:
        if i<=t and t<=j: # to check whether the counter value reached given interval
            n = i
            m = k 
            break
        k = k*2 
        i = j+1
        j = k+(i-1) #value which is used to increase the range in multiples of three
    a = m - (t - n) #finding the value of time t
    return (a)


#printing the time value
print(strangeCounter(4) == 6)   # true
print(strangeCounter(17) == 7)  # False

