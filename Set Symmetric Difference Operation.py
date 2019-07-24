#!/usr/bin/env python
# coding: utf-8

# In[17]:

e_n = int(input())
e = input().split(' ')
f_n = int(input())
f = input().split(' ')
print(len(set(e).symmetric_difference(f)))

