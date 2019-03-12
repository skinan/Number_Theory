//Reverse of a given number

int reverse(int n)
{
    int tmp;
    for(int i = n; i > 0; i = i / 10)
    {
        tmp = i % 10;//to get the face values of all places of a digit one by one starting from one-place to upper
        printf("%d",tmp);

    }
}
void  main()
    {
        int n;
        //Get the number to reverse
        scanf("%d",&n);
        reverse(n);
        return 0;
    }
