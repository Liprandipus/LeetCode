int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
           int i = 0 , j = 0 ;
           while ( i < nums1Size && j < nums2Size){
               if (nums1[i] == nums2[j]){ // if there are equal, you return the value
                   return nums1[i];
               }
              else if (nums1[i] < nums2[j]){       // if the first is smaller than the second, you move to the next element
                   i++;   

               }
               else{ //else if the second number is smaller than the first, you move to the next element
                   j++;

               }
           }

        return -1; // no solution
}
