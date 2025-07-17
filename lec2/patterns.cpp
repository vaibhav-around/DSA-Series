#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    /*

    1
    12
    123
    1234
    12345

    */
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << y;
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    /*

    1
    22
    333
    4444
    55555

    */
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    /*

    *****
    ****
    ***
    **
    *

    */
    for (int x = n; x > 0; x--)
    {
        for (int y = 0; y < x; y++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{

    /*
    1 2 3
    1 2
    1*/

    for (int x = n; x > 0; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    /*

      *
     ***
    *****

    */

    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < n - i - 1; a++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        for (int a = 1; a < n - i - 1; a++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    /*

    *****
     ***
      *

    */

    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < i; a++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int a = 0; a < i; a++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{

    /*

    *
    **
    ***
    **
    *

    */

    for (int x = 0; x < n; x++)
    {
        for (int j = 0; j <= x; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - (x + 1); j++)
        {
            cout << "_";
        }
        cout << endl;
    }
    for (int x = n - 1; x > 0; x--)
    {
        for (int y = 0; y < x; y++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - x; j++)
        {
            cout << "_";
        }
        cout << endl;
    }
}

void pattern7_2(int n)
{

    /*

    *
    **
    ***
    **
    *

    */

    for (int x = 1; x <= n * 2 - 1; x++)
    {
        int starsCount = x;
        int spaceCount = n - x;
        if (x > n)
        {
            starsCount = 2 * n - x;
            spaceCount = n - starsCount;
        };
        for (int j = 1; j <= starsCount; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaceCount; j++)
        {
            cout << "_";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    /*
    1
    01
    101
    0101
    */
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int k = 1; k <= i; k++)
            {
                cout << k % 2 << ' ';
            }
        }
        else
        {
            for (int k = 0; k < i; k++)
            {
                cout << k % 2 << ' ';
            }
        }
        cout << endl;
    }
}

void pattern8_2(int n)
{

    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int k = 1; k <= (n * 2) - (i * 2); k++)
        {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}

void pattern9_2(int n)
{
    int firstNumber = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int k = 1; k <= firstNumber; k++)
        {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        firstNumber -= 2;
        cout << endl;
    }
}

void pattern10(int n)
{

    /*
    1
    2 3
    4 5 6
    */
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pattern11(int n)
{

    /*
    A
    A B
    A B C
    */

    for (int i = 0; i < n; i++)
    {
        char start = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern12(int n)
{

    /*
    A
    A B
    A B C
    */

    for (int i = 0; i < n; i++)
    {
        char start = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern12_2(int n)
{

    /*
    A
    A B
    A B C
    */

    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{

    /*
    A B C
    A B
    A
    */

    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= ('A' + (n - i - 1)); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern13_2(int n)
{

    /*
    A B C
    A B
    A
    */

    for (int i = n - 1; i >= 0; i--)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern14(int n)
{

    /*
    A
    B B
    C C C
    */
    char k = 'A';
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (j <= i)
        {
            cout << k << ' ';
            j++;
        }
        k++;
        cout << endl;
    }
}

void pattern14_2(int n)
{

    /*
    A
    B B
    C C C
    */
    for (char i = 'A'; i < 'A' + n - 1; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern15_1(int n)
{

    /*
        A
      A B A
    A B C B A
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((n - i - 1) * 2); j++)
        {
            cout << '_';
        }
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << ' ';
        }
        for (char j = 'A' + i - 1; j >= 'A'; j--)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
}

void pattern15_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        char chr = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << chr;
            if (j <= breakPoint)
                chr++;
            else
                chr--;
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{

    /*
    C
    C B
    C B A
    */

    for (int i = 0; i < n; i++)
    {
        char chr = 'A';
        int breakPoint = n - i - 1;
        chr = chr + breakPoint;
        for (int j = 0; j <= i; j++)
        {
            cout << chr << ' ';
            chr++;
        }
        cout << endl;
    }
}

void pattern16_2(int n)
{

    /*
    C
    C B
    C B A
    */

    for (int i = 0; i < n; i++)
    {
        char chr = 'A' + (n - 1);
        for (int j = 0; j <= i; j++)
        {
            cout << chr << ' ';
            chr--;
        }
        cout << endl;
    }
}

void pattern19(int n)
{

    /*
     * * * * * *
     * *     * *
     *         *
     *         *
     * *     * *
     * * * * * *
     */

    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        // space
        for (int j = 0; j < i * 2; j++)
        {
            cout << '_';
        }

        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }

        // new line
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        // space
        for (int j = 0; j < ((n - i) - 1) * 2; j++)
        {
            cout << '_';
        }
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }

        // new line
        cout << endl;
    }
}

void pattern19_2(int n)
{

    /*
     * * * * * *
     * *     * *
     *         *
     *         *
     * *     * *
     * * * * * *
     */

    // initiating starting space
    int initSpace = 0;

    // outer loop
    for (int i = 0; i < n; i++)
    {

        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        // space
        for (int j = 0; j < initSpace * 2; j++)
        {
            cout << ' ';
        }

        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        // new line
        cout << endl;
        // increase in spaces
        initSpace += 2;
    }

    initSpace -= 2;

    // outer loop
    for (int i = 0; i < n; i++)
    {

        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // space
        for (int j = 0; j < initSpace * 2; j++)
        {
            cout << ' ';
        }

        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // new line
        cout << endl;
        // increase in spaces
        initSpace -= 2;
    }
}

void pattern20(int n)
{

/*
*         *
* *     * *
* * * * * *
* *     * *
*         *
*/
     // starting
    int start = 0;
    for (int i = 1; i <= n * 2 - 1; i++)
    {

        // incrementing start values
        if (i <= n)
            start++;
        else
            start--;


        // stars
        for (int j = 1; j <= start; j++)
        {
            cout << "*";
        }

        // spaces
        int j = 1;
        if(i <= n){
            while(j <= (n - i)*2){
                cout << " ";
                j++;
            }
        }
        else{
            while(j <= (i - n)*2){
                cout << " ";
                j++;
            }
        }

        // stars
        for (int j = 1; j <= start; j++)
        {
            cout << "*";
        }

        // new line
        cout << endl;        
    }
}

void pattern20_2(int n){
/*
*         *
* *     * *
* * * * * *
* *     * *
*         *
*/


// initialization 

// initial space
int initSpace = 2 * n - 2;
for(int i = 1; i <= (2*n-1); i++){
    int stars = i;
    if(i > n) stars = (2 * n) - i;

    // stars
    for(int j = 1; j <= stars; j++){
        cout << "*";
    }

    // spaces
    for(int s = 1; s<= initSpace; s++){
        cout << " ";
    }

    // stars
    for(int j = 1; j <= stars; j++){
        cout << "*" ;
    }

    cout << endl;


    if(i >= n){
        initSpace += 2;
    }else{
        initSpace -= 2;
    }
}    
}


void pattern21(int n){
    

// ***
// * *
// ***

for(int i = 1; i <= n; i++){
    
    // declaring stars
    int stars = 1;

    if(i == 1 || i == n) stars = n;

    // declaring spaces
    int spaces = 0;
    if (i != 1 || i != n) spaces = n-2;
    // stars
    for(int j = 1; j <= stars; j++ ){
        cout << "*";
    }

    // spaces
    for(int j = 1; j<=spaces; j++){
        cout << " ";
    }

    if (i == 1 || i == n) stars = 0;
    // stars
    for(int j = 1; j <= stars; j++){
        cout << "*";
    }

    cout << endl;
}
}

void pattern21_2(int n){

// ***
// * *
// ***

// initialization

// if n = 3
// i will run from 0 to 2
for(int i = 0; i < n; i++){

    // j will run from 0 to 2, at each i's iteration
    for(int j = 0; j < n; j++){

        // if i == 0 or i == 2 or j == 0 or j == 2, then only print "*" else " "
        if(i == 0 || i == n-1 || j == 0 || j == n-1){
            cout << "*";
        }else{
            cout << " ";
        }
    }

    // changing line, once whole j's iteration is over, means line
    cout << endl;
}


}



void pattern22(int n){

/*
33333
32223
32123
32223
33333
*/

// initialization

// for(int i = n; i >= 1; i--){
//     for(int j = n; j >= 1; j--){
//         if(j>=i){
//             cout << j;
//         }else {
//             cout << i;
//         }
//     }

//     for(int j = 2; j <= n-1; j++){
//         if(j<i){
//             cout << i;
//         }else{
//             cout << j;
//         }
//     }

//     cout << endl;
// }


// actual solution

for(int i = 0; i < n*2 - 1 ; i++){
    for(int j = 0; j < n*2 - 1; j ++){
        int top = j;
        int left = i;
        int right = (2 * n - 2) - i;
        int bottom = (2 * n - 2) - j;

        cout << n - min(min(top,left), min(right, bottom));
    }

    cout << endl;
}
}
    
int main()
{
    int n;
    cout << "Enter Number of Lines: " << endl;
    cin >> n;
    pattern22(n);
    return 0;
}

/*


int maxLines = 1;
// for loop to find out maximum lines to be printed in each row
for(int i = 0; i<n;i++){
    maxLines += 2;
}

cout << "Max Lines are: " << maxLines << endl;


int startIndex = maxLines/numToDivide;
    cout << "start Index: " << startIndex << endl;
    int endIndex = startIndex + valuesToPrint ;
    // cout << "end Index: " << endIndex << endl;

    numToDivide++;
    for(int y = 0; y < maxLines; y++){
            if(y >= startIndex && y < endIndex){
                cout << "*";
            }else {
                cout << "_";
            }
        }
        cout << endl;

        // incrementing values to print after each row
        valuesToPrint += 2;
    }

*/