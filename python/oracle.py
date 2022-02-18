#!/usr/bin/python

import cx_Oracle

__metaclass__ = type

class OracleConnect:
	def __init__(self, name, passw, db):
		s = "{0}/{1}@{2}".format(name, passw, db)
		self.con = cx_Oracle.connect(s)
	def __del__(self):
		self.con.close()

class OracleCursor(OracleConnect):
	def __init__(self, name, passw, db):
		super(self.__class__, self).__init__(name, passw, db)
		self.cur = cx_Oracle.Cursor(self.con)
	def __del__(self):
		self.cur.close()
	def sql(self, s):
		return self.cur.execute(s)
	def desc(self):
		return self.cur.description

cur = OracleCursor("bmaval8", "bmaval8", "fender2")
res = cur.sql("select t.* from s4009functions t where t.cc4009name like 'CAP029%' order by t.cc4009name")

for i, desc in enumerate(cur.desc()):
	print("{0:2d} {1}".format(i, desc))
print("")

for i, rec in enumerate(res):
	print("{0:2d}".format(i)),
	for s in rec:
		print("{0:25s}".format(s)),
	print("")
