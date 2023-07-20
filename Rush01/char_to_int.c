int char_to_int(char *number_list) // converts character to integer
{
    int numbers[];
    int i;
    int j;

    i = 0;
    j = 0;
    while (number_list[i] != '\0')
    {
        if (number_list[i] != ' ')
        {
            numbers[j] = number_list[i] - 48; // -48 because it  is the difference between ascii characters.
            j++;
        }
        i++;
    }

    return numbers;
}