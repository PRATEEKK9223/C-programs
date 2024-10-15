#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


//1.Function getsum to get sum of two numbers?
    
int getSum(int num1,int num2)
{
    return num1+num2;
}

void invoke_getSum()
{
    int a,b,sum;
    printf("enter two number to add\n");
    scanf("%d  %d",&a,&b);
    sum=getSum(a,b);
    printf("%d",sum);
}

//2.Function swapNumbers to swap two variables values?

void swapNumber(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void invoke_swapNumber()
{
     int a,b;
    printf("enter two number to swap\n");
    scanf("%d %d",&a,&b);
    printf("before swap a:%d and b:%d\n",a,b);
    swapNumber(&a,&b);
    printf("AFTER swap a:%d and b:%d\n",a,b);
}
// 3.Function isEven to return if number is even otherwice false?

bool isEven(int num)
{
    if(num%2==0)
        return true;
    else
        return false;
}
void invoke_isEven()
{
    int num;
    printf("enter a number to check even\n");
    scanf("%d",&num);
    if(isEven(num))
        printf("entered num is even");
    else
        printf("ENTERD NUMBER IS ODD");
}

//4.Function is Digit to return true if it is true?

bool isDigit(char *name)
{
    bool flag=true;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='0' && name[i]<='9')
            flag= true;
        else
            flag= false;
    
    }
return flag;
}
void invoke_isDegit()
{
    //direct hard code
    char name[]="1524765e";
    
    if(isDigit(name))
        printf("entered str is digite\n");
    else
        printf("enterd str is not digite");
}

 //5.Function getgreeting by accepting name and print greeting with name?

 void getGreet(char name[])
 {
    printf("hello %s ,wellcome",name);
 }

 void invoke_getGreet()
 {
    char name[50];
    printf("enter your name \n");
    scanf("%s",name);
    getGreet(name);
 }

  //6.Function to print ASCII values of strinf input?

void getASCII(char str[])
{
    
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%d",str[i]);
    }
}

void invoke_getASCII()
{
    char name[] = "prateek";
    getASCII(name);
}

 // 7.Function getstrlength  to get string length?

int getlength(char *str)
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void invoke_getlength()
{
    
    char name[10]= "prateek";
    printf("length of given str is =%d",getlength(name));
}

//8.Function getCOUNTOfOvewel to count ovewels in given string?

int getCountOfOvewel(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        
        if(str[i]=='a'||str[i]=='e'
        ||str[i]=='i'||str[i]=='o'
        ||str[i]=='u')
        {
            count++;
        }
        else 
            continue;   
    }
    return count;
}

void invoke_getCountOfOvewel()
{
    //direct hard code
    char name[]="XYZ";
    printf("number of oveweles=%d",getCountOfOvewel(name));
}


//9.Function to reverse a string using other memory and also in same memory?

void revers(char *str)
{
    char name[10];
    int i=0,length=0;

    while(str[i]!='\0')
    {   
        length++;
        i++;
    } 
    for(int i=0,j=length-1;str[i]!='\0';i++,j--)
    {
        name[i]=str[j];
    }    
    printf("%s",name);
}
void invoke_revers(void)
{
    char name[]="pra";
    revers(name);
}
// in same memory
void revers2(char *str)
{
    char temp;
    int len;
    //start=0
    //end=len-1
    len=getlength(str);
    for(int i=0;i<len-1-i;i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}
void invoke_revers2(void)
{
    char name[]="goati";
    revers2(name);
    printf("reverse str=%s",name);
}

//11.Function isPalindrom to find given string is palindron or not if print true?

bool isPalindrom(char *str)
{
    int len=getlength(str);
    bool flag=true;
    int start=0;
    int end =len-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            flag =false;
            break;
        }
        start++;
        end--;
    }
    return flag;
}
void invoke_isPalindrom(void)
{
    char name[]="mom";
    char name2[]="prateep";
    if(isPalindrom(name))
    {
        printf("enter str is  palindrom\n");
    }
    else
        printf("enter str is not palidrome");

}

//12.Function to print max and min value in an array?

void MaxMin(int *array,int size)
{
   
    int max,min;
    max=array[0];
    min=array[0];
    int i=1;
    while(i<size)
    {
        if(max<array[i])
            max=array[i];
        
        if(min>array[i])
            min=array[i];
        i++;
    }
    printf("max=%d and min=%d",max,min);
}
void invoke_MaxMin()
{
    int marks[]={10,36,-59,0,-34};
    int size=sizeof(marks)/sizeof(marks[0]);
    printf("size=%d\n",size);
    MaxMin(marks,size);
}
//13.Function to get sum all elementes in an array?

int getArraySum(int array[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+array[i];
    }
    return sum;
}
void invoke_getArraySum(void)
{
    int marks[]={1,2,3,4};
    int count=sizeof(marks)/sizeof(marks[0]);
    int sum=getArraySum(marks,count);
    printf("sum of array=%d",sum);
}

//14.Function to merge two arrays and return output in firstarray?

int* mergeArray(int array1[],int size1,int array2[],int size2)
{
    int j=size1-size2;
    for(int i=0;i<size2;i++,j++)
    {
        array1[j]=array2[i]; 
                               
    }
    return array1;
}
void invoke_mergeArray()
{
    int a[]={1,2,3,0,0,0};
    int b[]={4,5,6};
    int size1=sizeof(a)/sizeof(a[0]);
    int size2=sizeof(b)/sizeof(b[0]);
    int *ptr=mergeArray(a,size1,b,size2);
    //printing of merged array
    for(int i=0;i<size1;i++)
    {
        printf("%d\n",ptr[i]);
    }
}

// merging of array and stored in other array

int* getMerge(int *array1,int size1,int *array2,int size2)
{
    int n=size1+size2;
    int *merge=(int*)malloc(n*sizeof(int));
    if(merge==NULL)
        printf("memory is not allocated\n");
    else
    {
        for(int i=0;i<size1;i++)
        {
            merge[i] = array1[i];

        }
        for(int j=0;j<size2;j++)
        {
            merge[size1]=array2[j];
            size1++;
        }
    }
    return merge;    
}

void invoke_merge(void)
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    int size1=sizeof(a)/sizeof(a[0]);
    int size2=sizeof(b)/sizeof(b[0]);
    int *ptr =getMerge(a,size1,b,size2);
    printf("\n[");
    for(int k=0;k<size1+size2;k++)
    { 
        printf("%d,",ptr[k]);
    }
    printf("]\n");
    
}

 //15.Function to get second largest element in an integer array?
 
 int getSecondLargest(int *number,int size)
 {
    int max1,max2,max3;
    max1=number[0];
    max2=number[0];
    
    for(int i=1;i<size;i++)
    {
        if(number[i]<max2)
            continue;
        else if(number[i]>max2)
        {
            max2=max1;
            max1=number[i];
        }
        
        else if(number[i]>max2 && number[i]!=max1)
            max2=number[i];

    }
    return max2;
}
void invoke_secondLargest(void)
{
    int num[]={10,36,58,56};
    int size=sizeof(num)/sizeof(int);
    int result;
    result=getSecondLargest(num,size);
    printf("the second largest eleement in the array is =%d",result);
}

 //16.Function to print unique element in an integer array printUniqueelment?
 
  void print_unique(int number[],int size)
 {
    
    for(int i=0;i<size;i++)
    {
        bool isDuplicate=false;
         for(int j=i;j<size;j++)
        {
            if(number[i]==number[j] && i!=j)
                isDuplicate=true;
                
        }
        if(!isDuplicate)
            printf("%d\n",number[i]);    
        
    }    
    
 }
 void invoke_print_unique(void)
 {
    int num[]={1,1,1,2,3,4,4,4};
    int size=sizeof(num)/sizeof(num[0]);
    print_unique(num,size);
 }

//17.Function  to print intrsection or common elements of two integer arrays?

void print_intersection(int array1[],int size1,int array2[],int size2)
{
    bool isCommon=false;
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(array1[i]==array2[j])  
                printf("%d\n",array1[i]);
        }
    }
}
void invoke_print_intersection(void)
{
     int a[]={1,2,3,6};
    int b[]={4,1,2,5,6};
    int size1=sizeof(a)/sizeof(a[0]);
    int size2=sizeof(b)/sizeof(b[0]);
    print_intersection(a,size1,b,size2);

}
//18.Function to get count of words in the string ?

int getCountOfWords(char *str,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(str[i]==' '|| str[i]=='\t'||str[i]=='\n'||str[i]=='\0')
            count++;
    }
    return count;
}
void invoke_getCountOfWords(void)
{
    char sentence[]="hello this is me injnb fedg cuyf ";
    int size=sizeof(sentence)/sizeof(char);
    printf("size=%d\n",size);
    int result=getCountOfWords(sentence,size);
    printf("the number of words in sentence =%d",result);
}

//20.Function to remove spaces from the strinf?

void removeSpace(char str[])
{
    int read=0;
    for(;str[read]!='\0';read++)
    {
        if(str[read]==' ')
            continue;
        else
        {
            printf("%c",str[read]);
        }
    }
}
void invoke_removrSpace(void)
{
    char name[]="oej ioudeo geoig eoiudjow gj";
    removeSpace(name);
}

//19.Function to print binary values of various input like integer ,char,also perform shift operation on integer?

void binary(int number)
{
    int mark=1;//00000001
    int bitCount=sizeof(number)*8-1;
    mark = mark << bitCount;
    printf("\n binary representation\n");
    for(int i=0;i<=bitCount;i++)
    {
        if(number  & mark)
            printf("1 ");
        else
            printf("0 ");
        mark = mark >> 1;   
    }
} 
void invoke(void)
{
     binary(1);
    binary(2);
    binary(3);
    binary(4); 
}

//RIGHT SHIFT AND LEFT SHIFT OPERATION

int shift(int number ,char choice,int count)
{
    binary(number);
    if(choice)
    {
        number>>count;
    }
    else
    {
        number<<count;
    }
    return number;
    
}
void main()
{
    int num,ch,count;
    printf("enter number you want shift \n");
    scanf("%d",&num);
    printf("enter your choice like 1 ::right shift && 0 :: leftshift\n");
    scanf("%d",&ch);
    printf("enter number to shift number for number of times\n ");
    scanf("%d",&count);
    int result=shift(num,ch,count);
    printf("result=%d",result);


}



