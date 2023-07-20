void colup_strike(int n, int *number_of_column, int *field)
{
    int i;

    i = 0;
    if(n == 4)
    {
        while(i < 4)
        {
            *field[i][number_of_column] = i+1;
            i++
        }
    }
}