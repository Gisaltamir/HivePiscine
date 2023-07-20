int main(int argc, char *argv)
{
    int *numbers = char_to_int(*argv); // change the character number list to integer. REAALLLYYY LARGE LIST
    int i = 0;
    int colup = number_organization(*numbers, 0); // [1, 4 ,2, 3] cuts the really big list of number (*numbers) in 4
    int coldown = number_organization(*numbers, 4); // [1, 4 ,2, 3] cuts the really big list of number (*numbers) in 4
    int rowleft = number_organization(*numbers, 8); // [1, 4 ,2, 3] cuts the really big list of number (*numbers) in 4
    int rowright = number_organization(*numbers, 12); // [1, 4 ,2, 3] cuts the really big list of number (*numbers) in 4
    int field = {{0, 0, 0, 0}, 
                 {0, 0, 0, 0}, 
                 {0, 0, 0, 0}, 
                 {0, 0, 0, 0}}; // blank field
    while (i < 4)
    {
        colup_strike(colup[i], i, field);
        coldown_strike(coldown[i], i, field);
        first_numbers(colup[i], "colup", field[0][i]);    // the function puts 1 or 4 in one field element
        first_numbers(rowleft[i], "rowleft", field[i]); // the function puts 4 in one field or (1 to 4) in all the row
        first_numbers(rowright[i], "rowright", field[i]); // the function puts 4 in one field or (1 to 4) in all the row
        first_numbers(coldown[i], "coldown", field[3][i]); // the function puts 1 or 4 in one field element
        i++;
    }



    // a function which put 1 to 4 in columns.
    //  the monster function.
}

