int fact (int a)
{int f=1;
 if(a==0)
 return(f);

 else
 {int i;
  for(i=1;i<=a;i++)
  f=f*i;
  return(f);
  }
}
