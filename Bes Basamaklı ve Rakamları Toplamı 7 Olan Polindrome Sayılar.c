#include <stdio.h>
#include <stdlib.h>
//  5 basamakl� rakamlar� toplam� 7 olan polindrome say�lar� ekrana basan kod par�ac���
int main()
{
  int i,j,k,l,s;
	for(i=1;i<=9;i++)
    {
		for(j=0;j<=9;j++)
		{
			for(k=0;k<=9;k++)
			{
				for(l=0;l<=9;l++)
				{
                    for(s=0;s<=9;s++)
                    {
                        if(i==s&&j==l &&i+j+k+l+s==7)
                        printf("%d\n",i*10000+j*1000+k*100+l*10+s);
                    }
				}

			}
		}
	}
	return 0;
}
