i="y"
echo "Enter first number :"
read n1
echo "Enter second number :"
read n2
while [ $i = "y" ]
do
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
echo "Enter your choice"
read ch
case $ch in
1)sum=$(( $n1 + $n2 ))
echo "Sum ="$sum;;
2)sub=$(( $n1 - $n2 ))
echo "Sub = "$sub;;
3)mul=$(( $n1 \* $n2 ))
echo "Mul = "$mul;;
4)div=$(( $n1 / $n2 | bc -l ))
echo "Div = "$div;;
*)echo "Invalid choice";;
esac
echo "Do u want to continue ?"
read i
if [ $i = "y" ]
then
exit
fi
done
