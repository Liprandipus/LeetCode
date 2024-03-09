void reverseString(char* s, int sSize) {
    int start =0; //set a pointer to the beginning of the string
    int end = sSize-1; //set another pointer to the end of the string
    int temp; // temp value 
    while (start<end) // 
{   
    // you swap each value 
   temp = s[start]; 
   s[start] = s[end];
   s[end] = temp;

    start++;
    end--;
     // you get the string reversed ( notice that in odd-numbered strings, the middle elemnt isn't important. It remains always in the same place.

}}
