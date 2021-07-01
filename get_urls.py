import pandas as pd
from bs4 import BeautifulSoup as bs
import requests as rs
import re
def explore(url):
    page=rs.get(url)
    content=page.text
    global soup
    soup= bs(content, 'html.parser')
    f=open('urlist.txt', 'w')
    for link in soup.find_all('a'):
        a=link.attrs.get('href')
        f.write(str(a)+'\n')
    f.close()
def find_url():    
    f=open('urlist.txt', 'r+')
    c=f.read()
    list=c.split('\n')
    no = 0
    pattern=re.compile(r'/movies/kgf')
    for i in list:
        if i:
            no +=1
            match=pattern.search(i)
            if match is not None:
                print(match)
                return i
                       
    f.close()            
   
    
#explore('https://in.bookmyshow.com/explore/home/hyderabad')
a=find_url()
print('https://in.bookmyshow.com'+a)  
