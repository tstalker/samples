#!/usr/bin/python

__metaclass__ = type

class A:
	def __init__(self, c):
		print("A::init({})".format(c))
		self.__c = c
	def out(self):
		print("A::out():")
		print("{}".format(self.__c))

class B(A):
	def __init__(self, c0, c1):
		print("B::init({0}, {1})".format(c0, c1))
		super(self.__class__, self).__init__(c0)
		self.__c = c1
	def out(self):
		print("B::out():")
		A.out(self)
		print("{}".format(self.__c))

class C(A):
	def __init__(self, c0, c1):
		print("C::init({0}, {1})".format(c0, c1))
		super(self.__class__, self).__init__(c0)
		self.__c = c1
	def out(self):
		print("C::out():")
		A.out(self)
		print("{}".format(self.__c))

class D(B, C):
	def __init__(self, c0, c1, c2, c3, c4):
		print("D::init({0}, {1}, {2}, {3}, {4})".format(c0, c1, c2, c3, c4))
		B.__init__(self, c0, c1)
		B.out(self)
		C.__init__(self, c2, c3)
		B.out(self)
		self.__c = c4
	def out(self):
		print("D::out():")
		B.out(self)
		C.out(self)
		print("{}".format(self.__c))

b = B('a', 'b')
b.out()

c = C('a', 'c')
c.out()

d = D('a', 'b', 'e', 'c', 'd')
d.out()
