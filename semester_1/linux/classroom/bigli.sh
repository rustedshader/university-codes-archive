#! /bin/bash
echo "Enter the Total Unit consumption of electricity"
read t

if [[ $t -lt 200 ]]
then
echo "Total Payable amount: Rs 515"
elif [[ $t -ge 200 && $t -lt 400 ]]
then
x=$(($t - 200))
z=$(( $(( 635 * $x )) / 100  ))
k=$(( 500 + $z ))
l=$(( $(( $(( $k * 3 )) / 100 )) ))
echo "Total Payable amount: $(( $l + $k ))"
elif [[ $t -ge 400 && $t -lt 600 ]]
then
x=$(($t - 400 ))
z=$(( 8 * $x ))
k=$(( 1800 + $z ))
l=$(( $(( $k * 3 )) / 100 ))
echo "Total Payable amount: $(( $l + $k ))"
else
x=$(( $t - 600 ))
z=$(( 10 * $x ))
k=$(( 3400 + $z ))
l=$(( $(( $k * 3 )) / 100 ))
echo "Total Payable amount: $(( $l + $k ))"
fi
