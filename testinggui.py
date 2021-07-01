from tkinter import *
import sqlite3
import glob
import os

def gui():
    root=Tk()
    root.title('DBMS')
    root.geometry('500x500')
    b1=Button(root,text='connect to database',command='init_db()')
    b2=Button(root,text='create table',command='create_table()')
    b3=Button(root,text='show table',command='show_table()')
    b4=Button(root,text='insert into table',command='insert()')
    b5=Button(root,text='drop table')
    b6=Button(root,text='show table')
    b7=Button(root,text='runscript')
    list=[b1,b2,b3,b4,b5,b6,b7]
    for x in list:
        x.pack()
    root.mainloop()
    

def init_db(db_name):
    print('\n***initializing database -->'+db_name+'***\n')
    name=db_name
    global con
    con= sqlite3.connect(name)
    global db
    db= con.cursor()
    print('***connection success ***\n')

def create_table(table_name):
    table=table_name
    print('\n***accessing'+table+'***\n')
    global coloumn_name
    coloumn_name =input("coloumn_names :")
    db.execute('DROP TABLE IF EXISTS '+table)
    db.execute('''CREATE TABLE '''+table+'''('''+coloumn_name+''')''')
    #db.execute("CREATE TABLE "+table+"(date text, trans text, symbol text, qty real, price real)")
    print(table+' created successfully \n')
    con.commit()

def show_table(table_name):    
    t=table_name
    #c=db.execute("SELECT * FROM "+t).fetchall()
    for row in db.execute("SELECT * FROM "+t):
        print(row)
        print('\n')

def insert(table_name):
    t=table_name
    v=input('enter values:')
    db.execute("insert into "+t+" values("+v+")")
    con.commit()
    
def drop_table(table_name):
    table=table_name
    db.execute('DROP TABLE '+table)
    con.commit()
    print(table+'removed')
    
def show_db():
    print('| AVAILABLE DATABASES |')
    for x in glob.glob('*.db'):
        print(x)
    for x in glob.glob('*.sqlite'):
        print(x)
def run_script():
    f=open('schema.sql', 'r+')
    db.executescript(f.read())
    con.commit()
    f.close()
gui()
    
