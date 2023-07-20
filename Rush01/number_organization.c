char number_organization(char *numbers , int n) 
{
    char *hundred;

   while (n < n+3){
        hundred = numbers[n];
        n++;
    }
    return (hundred);
}