#include <stdio.h>
#include <string.h>

int f( char x )
{
	if( '0' <= x && x <= '9' )
		return x-'0';
	return x-'A'+10;
}
char g( int x )
{
	if( x < 10 )
		return '0'+x;
	else
		return 'A'+x-10;
}

int main()
{
	char s[10];
	int a, b, i;
	while( scanf( "%s %d %d" , s , &a , &b ) > 0 )
	{
		int len = strlen( s ), cur = 0;
		for( i = 0 ; i < len ; i ++ )
			cur = cur * a + f( s[i] );
		len = 6;
		s[7] = 0;
		for( i = 0 ; i < 7 ; i ++ )
			s[i] = ' ';
		s[len] = '0';
		while( cur && len >= 0 )
		{
			s[len--] = g( cur % b );
			cur /= b;
		}
		if( cur )
			puts( "  ERROR" );
		else
			puts( s );
	}
	return 0;
}
