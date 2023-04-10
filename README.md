# python
1
from sympy import*
import numpy as np
import matplotlib . pyplot as plt
x , y= symbols ('x,y')
sol = solve ([2*x+y-7 , 3*x-y-3],[x , y])
p=sol[x]
q=sol[y]
print ('Point of intersection is A (', p ,',', q , ')\n' )
x = np . arange (-10 , 10 , 0.001 )
y1 = 7-2*x
y2=3*x-3
plt . plot (x , y1 ,'r')
plt . plot (x , y2 ,'g')
plt . plot (p ,q , marker = '*')
plt . annotate ('A', xy=(p , q ) , xytext =( p+0.5 , q ) )
plt . xlim (-10 , 10 )
plt . ylim (-10 , 10 )
plt . axhline ( y=0 )
plt . axvline ( x=0 )
plt . title ("$2x+y=7; 3x -y=3$")
plt . xlabel (" Values of x")
plt . ylabel (" Values of y ")
plt . legend (['$2x+y=7$ ', '$3x -y-3$ '])
plt . grid ()
plt . show ()
