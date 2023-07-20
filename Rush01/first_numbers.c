void first_numbers(int n, char *position, int *row) 
{
    int i;

    i = 0;
    
    if (n == 4)
    {
        if(*position == "rowleft")
        {
            while (i < 4)
            {
                *row[i] = i+1;
                i++
            }
        }
        else if (*position == "rowright"){ // going backwards
            int j= 4;
            while( j < 0)
            {
                *row[j] = i+1;
                j--;
                i++;
            }
        }
        else // columns
        {
            *row = 1;
        }
    }
}