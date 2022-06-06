1.


int plus_one(int x) {
  return x-(x^(~x));
}


2.


stringbuilder get_bin_1(int x)
{
  unsigned int i;
  stringbuilder sb = new_sb();
  for (i = ~(INT_MAX); i>0;i=i>>1)
  {
   if ((x>=i) && (i&x)==i)
          sb_append(sb, '1');
        else
          sb_append(sb, '0');
  }
return sb;
}


3. 
unsigned largest_po2_le(unsigned x)
{
  unsigned int i;
  for (i = (~INT_MAX); i>0; i=i>>1)
  {
        if ((i&x)==i)
          return x&i;
  }
}


4.
stringbuilder get_bin_2(int x) {
  unsigned int i;
  stringbuilder sb = new_sb();


  i = ~(INT_MAX);


  if ((i&x) == i)
  {
        x = (~x) - (x^(~x));
        sb_append(sb, '-');
  }
  for (; i>0;i=i>>1)
  {
        if ((x>=i) && (i&x)==i)
          sb_append(sb, '1');
        else if ((x>=i) && (i&x)==0)
          sb_append(sb, '0');
  }
  return sb;
}