from array import *
import sys
import numpy as np

class people:
    def __init__(self, name, place):
        self.name=name
        self.place=place

p1 = people("JOhn", "USA")

print(p1.name)
print(p1.place)

print(p1.name)

print(sys.executable)

x = np.array([[2.,4.,6.]])
y = np.array([[1.],[3.],[5.]])

array_num = array('i', [1,3,5,7,9])
for i in array_num:
    print(i)
print("Access first two individually")
print(array_num[0])
print(array_num[1])

print("Original array:" +str(array_num))
array_num.append(11)
print("New array:" +str(array_num))

array_num.reverse()
print("The reverse order of the string is as follows\n")

print(str(array_num))
print("The itemsize of the array is " +str(array_num.itemsize))

class person:
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def myfunc(self):
        print("Age")

p1 = person("John", 44)

print(p1.age)
print(p1.name)
