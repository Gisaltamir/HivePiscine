int posible_numbers(int numbers) // saves the numbers that we don't have and returns them to final_posible_numbers. 
{
    int i;
    int j;
    int result[4];
    int *final_posible_numbers = []
  
    i = 0;
    while (i < 4)
    {
        result[i] = 0;
        if (number[i] != 0)
        {
            result[numbers[i] -1] = 1;
            i++;
        }
    }
    
    i = 0;
    j= 0;
    while (i < 4)
    {
        if (result[i] == 0)
        {
            *final_posible_numbers[j] = i + 1;
            j++;
        }
        i++;
    }
        return final_posible_numbers;
}