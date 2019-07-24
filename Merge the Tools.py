#!/usr/bin/env python
# coding: utf-8

# In[1]:


def merge_the_tools(string, k):
AABCAAADA 

    def splitCount(string, k):
     return [''.join(x) for x in zip(*[list(string[z::k]) for z in range(k)])]

    from collections import OrderedDict

    [print(''.join(OrderedDict((j,1) for j in i ).keys())) for i in splitCount(string, k)]

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)

