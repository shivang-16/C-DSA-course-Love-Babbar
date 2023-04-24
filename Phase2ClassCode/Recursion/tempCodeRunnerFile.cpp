 int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2])
        arr[mainArrayIndex++]=first[index1++];
        else
        arr[mainArrayIndex++]=second[index2++];
    }

    while(index1<len1){
      arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
      arr[mainArrayIndex++]=second[index2++];
    }
    