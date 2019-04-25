import sys
sys.path.insert(0, '/home/yousof/my_ws/binder/test/build')
import T43_myTest
import T43_myTest.ApiNameSpace as t
b = t.builder()
c1 = t.child()
c2 = t.child()
cs = [c1,c2]


#help(t)
help(T43_myTest.std)

cs2 = T43_myTest.std.vector_ApiNameSpace_Base1()


b.someFunction1("test", cs)