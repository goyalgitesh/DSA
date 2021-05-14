#include <iostream>
using namespace std;

int size = 100;

void Display(int arr[], int n) {
    for (int i = 0; i<n; i++) {

        cout <<arr[i]<<" ";
    }

}

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Append(int arr[], int n, int x) {
    if (n < size) {
    arr[n] = x;
    n++;
    cout<<"Operation successful.Element is successfully Appended :)"<<endl;
    cout<<"Array after appending the element is:"<<endl;
    Display(arr,n);
    }
    else {
        cout<<"Array is full. Element can't be appended here. Operation fail :("<<endl;
    }
}

void Insert(int arr[],int n, int index,int x) {
    if (n < size) {
    for (int i = n; i>index; i--) {
        arr[i] = arr[i-1];
}
    arr[index] = x;
    n++;
    cout<<"Operation successful.Element is successfully Inserted :)"<<endl;
    cout<<"Array after inserting the element is:"<<endl;
    Display(arr,n);

 }
else {
cout<<"Array is full. Element can't be inserted here. Operation fail :("<<endl;

}
}

void Delete(int arr[], int n, int index) {
    if (index>=0 && index<n) {
        int x = arr[index];
        for (int i = index; i<n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
        cout<<"Operation successful.Element is successfully Deleted :)"<<endl;
        cout<<"Array after deleting the element is:"<<endl;
        Display(arr,n);
}
else {
    cout<<"Index is not in range. Operation fail :("<<endl;
}
}

void linear_search(int arr[],int n, int key) {
    int flag = 0;

    for (int i = 0; i<n; i++) {
        if (key == arr[i]) {
        cout<<"Search is Successful.Element is found at index " << i <<endl;
        flag = i;
         }
    }
    if (flag==0) {
        cout<<"Search unsuccessful element is not found"<<endl;
    }

}

void Get(int arr[], int n, int index) {
  if(index >=0 && index <n)
  cout<<"Element is: "<<arr[index]<<endl;
  else
  cout<<"Invalid Index"<<endl;
}

void Set(int arr[],int n, int index, int x) {
  if(index >=0 && index <n) {
    arr[index] = x;
  cout<<"Element Set Successfully\nAfter Setting Array is:\n"<<endl;
  Display(arr,n);
  }
  else
  cout<<"Invalid Index"<<endl;

}

void Max(int arr[], int n) {

  int max = arr[0];
  for (int i = 1; i<n;i++) {
    if(arr[i] > max)
    max = arr[i];
  }
  cout<<"Maximum Element is: "<<max<<endl;
}

void Min(int arr[],int n) {
  int min = arr[0];
  for (int i = 1; i<n;i++) {
    if(arr[i] < min)
    min = arr[i];
  }
  cout<<"Minimum Element is: "<<min<<endl;
}

void Total(int arr[],int n) {
  int total = 0;
for (int i=0;i<n;i++) {
  total = total + arr[i];
  }
  cout<<"Sum of Array is :"<<total<<endl;

}

void Average(int arr[],int n) {
  int total = 0;
for (int i=0;i<n;i++) {
  total = total + arr[i];
  }
  cout<<"Average of Array is :"<<total/n<<endl;

}

void Reverse(int arr[], int n) {
  int B[n];
  int i,j;
  for (i = n-1,j=0; i>=0; i--,j++) {
    B[j] = arr[i];
  }
  for (i=0; i<n;i++) {
    arr[i] = B[i];
  } 
  cout<<"After reversing array is:"<<endl;
  Display(arr,n);

}

void Lshift(int arr[],int n) {
  for (int i = 0; i<n-1; i++) {
    arr[i] = arr[i+1];
}
arr[n-1] = 0;
cout<<"After left shifting array is:"<<endl;
Display(arr,n);
}

void Rshift(int arr[],int n) {
  for (int i = n-1; i>0; i--) {
    arr[i] = arr[i-1];
}
arr[0] = 0;
cout<<"After right shifting array is:"<<endl;
Display(arr,n);
}

void LRotate(int arr[],int n) {
  int temp = arr[0];
  for (int i = 0; i<n-1; i++) {
    arr[i] = arr[i+1];
}
arr[n-1] = temp;
cout<<"After left rotating array is:"<<endl;
Display(arr,n);
}

void RRotate(int arr[],int n) {
  int temp = arr[n-1];
  for (int i = n-1; i>0; i--) {
    arr[i] = arr[i-1];
}
arr[0] = temp;
cout<<"After right rotating array is:"<<endl;
Display(arr,n);
}

string isSorted(int arr[],int n) {
    for (int i=0; i<n-1; i++) {
        if (arr[i] > arr[i+1])
        return "Array is not sorted";
    }
    return "Array is sorted";

}

int main() {

    int A[size];
    int length;
    int index, x;
    cout <<"Enter the length of array"<< endl;
    cin >> length;
    cout << "Enter the "<<length<< " Elements of the array"<<endl;
    for (int i = 0; i<length; i++) {
        cin >> A[i];
    }
    int ch;
    cout<<"******ARRAY ADT ALL OPERATIONS******\n1.Display()\n2.Append(x)\n3.Insert(index,x)"<<endl;
    cout<<"4.Delete(index)\n5.Linear Search(key)\n6.Get(index)\n7.Set(index,x)\n8.Max()"<<endl;
    cout<<"9.Min()\n10.Sum()\n11.Average()\n12.Reverse()\n13.Lshift()\n14.Rshift()\n15.LRotate()\n16.RRotate()"<<endl;
    cout<<"17.Check sorted"<<endl;
    while (1) {
    cout<<"\nEnter your choice"<<endl;
    cin >>ch;
    switch (ch)
    {
    case 1:
        Display(A,length);
        break;
    case 2:
        cout << "Enter the element you want to append"<<endl;;
        cin >> x;
        Append(A,length,x);
        break;

    case 3:
        cout <<"Enter the element you want to insert"<<endl;
        cin >> x;
        cout <<"Enter the index where you want to insert the element.(0<=Index<="<<length<<")"<<endl;
        cin >> index;
        Insert(A,length,index,x);
        break;

    case 4:
    cout<<"Enter the index of which element you want to delete"<<endl;
    cin>>index;
    Delete(A,length,index);
    break;

    case 5:
    int k;
    cout<<"Enter the element which you want to find"<<endl;
    cin>>k;
    linear_search(A,length,k);
    break;

    case 6:
    cout<<"Enter the index of element"<<endl;
    cin>>index;
    Get(A,length,index);
    break;

    case 7:
    cout<<"Enter the index of element where you set the element"<<endl;
    cin>>index;
    cout<<"Enter the element which you want to set"<<endl;
    cin>>x;
    Set(A,length,index,x);
    break;

    case 8:
    Max(A,length);
    break;

    case 9:
    Min(A,length);
    break;

    case 10:
    Total(A,length);
    break;

    case 11:
    Average(A,length);
    break;

    case 12:
    Reverse(A,length);
    break;

    case 13:
    Lshift(A,length);
    break;

    case 14:
    Rshift(A,length);
    break;

    case 15:
    LRotate(A,length);
    break;

    case 16:
    RRotate(A,length);
    break;

    case 17:
    isSorted(A,length);
    break;


    default:
    cout <<"Invalid input. Try again..."<<endl;
    break;

}


}


}
