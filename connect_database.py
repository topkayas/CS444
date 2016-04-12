#!/usr/bin/python

import MySQLdb

def main():
	try:
		conn=MySQLdb.connect(host="oniddb.cws.oregonstate.edu", user="topkayas-db", passwd="6PuTiu4z8YecOgGp", db="topkayas-db")
		cur=conn.cursor()
		count = cur.execute('select * from table')
		print count
		cur.close()
		conn.close()
	except MySQLdb.Error,e:
		print "Mysql Error %d: %s" % (e.args[0], e.args[1])

if __name__ == "__main__":
	main()


