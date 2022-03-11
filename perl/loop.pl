#!/usr/bin/perl

use strict;
use warnings;

my @v;
for(my $i = 0; $i < 10; $i++)
{
	push @v, $i;
}
print $#v, "\n";
print scalar @v, "\n";

foreach my $n(@v)
{
	print "$n ";
}
print "\n";

my $i = 0;
while($i <= $#v)
{
	print "$v[$i] ";
	$i++;
}
print "\n";
