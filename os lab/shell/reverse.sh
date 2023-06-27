echo "enter a number to check palindrome"
read num
s=0
rev=""
temp=$num  
while [ $num -gt 0 ]
do
    s=$(( $num % 10 ))
    num=$(( $num / 10 ))    
    rev=$(( ${rev}${s} ))   
done
echo "reverse of a number"
echo $rev
  
if [ $temp -eq $rev ];
then
    echo "Number is palindrome"
else
    echo "Number is NOT palindrome"
fi
