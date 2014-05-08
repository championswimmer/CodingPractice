/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2014 Arnav Gupta <championswimmer@championswimmer-Lenovo-Z580>
 * 
 * strong-string is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * strong-string is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *   abcde
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <iostream>
#include<stdio.h>
#include <set>
using namespace std;
char s1[100005];
set<int> s2[26];
int main()
{	
int n,i;
cin>>n;
cin>>s1;
for(i=0;i<n;i++)
{
s2[int(s1[i])-97].insert(i);
}
set<int>::iterator st;
int last;
last=-1;
for(i=25;i>=0;i--){
if(!s2[i].empty())
{
st=s2[i].upper_bound(last);
if(st!=s2[i].end())
{
cout<<(char)(i+97);
last=*st;
}
}
}
return 0;
}