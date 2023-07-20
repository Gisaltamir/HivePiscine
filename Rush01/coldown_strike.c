void coldown_strike(int n, int *number_of_column, int *field)
{
    int i;
    int j;

    i = 0;
    j = 4;

    if(n == 4)
    {
        while(i < 4)
        {
            *field[i][number_of_column] = j;
            i++;
            j--;
        }
    }
}