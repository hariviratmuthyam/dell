import pandas as pd
from bs4 import BeautifulSoup as bs
import requests as rs
import re
class scrape:
    def __init__(self,url1,url2):
        self.url1=url1
        self.url2=url2
	
    def explore(x):
        page=rs.get(x.url1)
        content=page.text
        soup=bs(content, 'html.parser')
        pattern=re.compile(x.url2)
        for link in soup.find_all('a'):
            a=link.attrs.get('href')
            match=pattern.search(str(a))
            if match is not None:
                print(match)
                return a
    def get_text(x):
        page=rs.get(x.url1)
        content=page.text
        soup=bs(content, 'html.parser')
        for text in soup.body.find_all('span'):
            print(text.text)
            print('\n')
            #print(soup.span)
            #print(soup.span.name)
        #print(soup.body.text)
            
s1=scrape('https://in.bookmyshow.com/explore/home/hyderabad','/movies/kgf')
b=s1.explore() 
c='https://in.bookmyshow.com/hyderabad'+b
s2=scrape(c,b)
s2.get_text()
s3=scrape('https://www.w3schools.com/sql/','x')
s3.get_text()
   